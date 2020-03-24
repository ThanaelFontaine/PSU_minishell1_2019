/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_printf2.c
*/

#include "../../include/printffonct.h"

void is_a_string(va_list ap)
{
    char *i = va_arg(ap, char *);

    my_putstr (i);
}

void is_a_character(va_list ap)
{
    int i = va_arg(ap, int);

    my_putchar (i);
}

void is_a_nbr(va_list ap)
{
    int i = va_arg(ap, int);

    my_put_nbr (i);
}

void is_a_pointer(va_list ap)
{
    my_putstr("0x");
    my_putnbr_base(va_arg(ap, long long), "0123456789abcdef");
}

void is_hexa_base(va_list ap)
{
    unsigned int i = va_arg(ap, unsigned int);

    my_putnbr_base(i, "0123456789abcdef");
}