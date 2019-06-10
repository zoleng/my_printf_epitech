/*
** EPITECH PROJECT, 2018
** printf.h
** File description:
** lib for printf
*/

#ifndef PRINTF_H_
#define PRINTF_H_

#include <stdarg.h>
#include <unistd.h>

void my_putchar(char c);
void my_put_nbr_int(int integer);
void my_put_nbr_un_int(int integer);
void my_put_base_octo(int integer);
void my_put_base_hexa(int integer);
void my_put_special(char *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_printf(char *input, ...);
void my_put_binary(char *str);
void flag_test(char *input, int i, va_list ap);
int flag_test_2(char *input, int i, va_list ap);
void my_put_base(unsigned int nb, char *base);

#endif
