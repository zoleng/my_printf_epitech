/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "printf.h"

int my_printf(char *input, ...)
{
    va_list ap;
    va_start(ap, input);
    int i = 0;
    int n = 1;

    while (input[i] != '\0') {
        if (input[i] == '%') {
            while (input[i + n] == '%') {
                my_putstr("%");
                i = i + 1;
            }
            flag_test(input, i, ap);
            flag_test_2(input, i, ap);
            i = i + 1;
        }
        if (input[i - 1] != '%')
            my_putchar(input[i]);
        i = i + 1;
    }
    va_end(ap);
    return 0;
}

void flag_test(char *input, int i, va_list ap)
{
    switch (input[i + 1]) {
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case 'd':
        my_put_nbr_int(va_arg(ap, int));
        break;
    case 'i':
        my_put_nbr_int(va_arg(ap, int));
        break;
    case 'b':
        my_put_base(va_arg(ap, int), "01");
        break;
    }
}

int flag_test_2(char *input, int i, va_list ap)
{
    switch (input[i + 1]) {
    case 'S':
        my_put_special(va_arg(ap, char *));
        break;
    case 'o':
        my_put_base(va_arg(ap, int ), "01234567");
        break;
    case 'x':
        my_put_base(va_arg(ap, int), "0123456789ABCDEF");
        break;
    case 'X':
        my_put_base(va_arg(ap, int), "0123456789ABCDEF");
        break;
    case 'u':
        my_put_nbr_un_int(va_arg(ap, int));
        break;
    default:
            return (0);
        break;
    }
}