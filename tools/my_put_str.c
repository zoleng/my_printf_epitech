/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include "../printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
