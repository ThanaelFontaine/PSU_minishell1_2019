/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** printffonct.h
*/

#ifndef __TEST__
#define __TEST__
#include <stdarg.h>
#include "my.h"

typedef struct struc_s
{
    char c;
    void (*function)(va_list);
} struc_t;

void is_a_string(va_list ap);
void is_a_character(va_list ap);
void is_a_nbr(va_list ap);
void is_a_pointer(va_list ap);
void is_hexa_base(va_list ap);

void is_hexa_base_(va_list ap);
void is_a_nbr2(va_list ap);
void is_a_binary(va_list ap);
void is_a_octal(va_list ap);
void is_a_unsigned(va_list ap);

#endif /*_TEST_*/