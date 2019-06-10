/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../printf.h"

void my_put_nbr_int(int nb)
{
    if (nb > 9)
        my_put_nbr_int(nb / 10);
    else if (nb < 0)
    {
        write(1, "-", 1);
        nb = nb * -1;
        my_put_nbr_int(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}

void my_put_nbr_un_int(int integer)
{
    int  res = 0;
    unsigned int j = (unsigned int)integer;

    if (integer <= 9 && integer >= 0)
        my_putchar(integer + '0');
    if (integer < 0) {
        integer = integer * (-1);
        if (integer <= 9 && integer >=0)
            my_put_nbr_int(integer);
    }
    if (integer > 9) {
        res = integer % 10;
        my_put_nbr_int(integer / 10);
        my_putchar(res + '0');
    }
}
