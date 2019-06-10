/*
** EPITECH PROJECT, 2018
** my_put_special
** File description:
** put special char
*/

#include "../printf.h"

void my_put_special(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_put_base(str[i], "01234567");
        }
        my_putchar(str[i]);
        i = i + 1;
    }
}
