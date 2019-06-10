/*
** EPITECH PROJECT, 2018
** my_put_binary
** File description:
** put number in a binary base
*/

#include "../printf.h"

void my_put_binary(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i] % 2);
}
