/*
** EPITECH PROJECT, 2018
** my_put_base
** File description:
** put a base
*/

#include "../printf.h"

void my_put_base_octo(int integer)
{
    int res = 0;

    if (integer < 0) {
        my_putchar ('-');
        integer = -integer;
    }
    res = integer % 8;
    integer = integer / 8;
    if (integer > 0)
        my_put_base_octo(integer);
    my_putchar(res + '0');
}

void my_put_base_hexa(int integer)
{
    int res = 0;

    if (integer < 0) {
        my_putchar ('-');
        integer = -integer;
    }
    res = integer % 16;
    integer = integer / 16;
    if (integer > 0)
        my_put_base_octo(integer);
    my_putchar(res + '0');
}

void my_put_base(unsigned int nb, char *base)
{
    int len = my_strlen(base);

    if (nb > 1)
        my_put_base(nb / len , base);
    my_putchar(base[nb % len]);
}