/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf3.c
*/

#include "../../include/printffonct.h"

void is_hexa_base_(va_list ap)
{
    int a = va_arg(ap, int);

    my_putnbr_base(a, "0123456789ABCDEF");
}

void is_a_nbr2(va_list ap)
{
    is_a_nbr(ap);
}

void is_a_binary(va_list ap)
{
    int a = va_arg(ap, int);

    my_putnbr_base(a, "01");
}

void is_a_octal(va_list ap)
{
    int a = va_arg(ap, int);

    my_putnbr_base(a, "01234567");
}

void is_a_unsigned(va_list ap)
{
    int a = va_arg(ap, int);

    my_putnbr_base(a, "0123456789");
}