/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf.c
*/

#include "../../include/printffonct.h"

static const struc_t tableau[] = {
    {'s', is_a_string},
    {'c', is_a_character},
    {'d', is_a_nbr},
    {'i', is_a_nbr2},
    {'p', is_a_pointer},
    {'x', is_hexa_base},
    {'X', is_hexa_base_},
    {'b', is_a_binary},
    {'o', is_a_octal},
    {'u', is_a_unsigned},
    {'\0', NULL}
};

void le_tableau(char c, va_list ap)
{
    int boule = 0;

    for (int g = 0; tableau[g].c; g += 1) {
        if (c == tableau[g].c) {
            tableau[g].function(ap);
            boule = 1;
        }
    }
    if (boule == 0) {
        my_putchar('%');
        my_putchar(c);
    }
}

int my_printf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);

    for (int i = 0; str[i]; i += 1) {
        if (str[i] == '%') {
            i += 1;
            le_tableau(str[i], ap);
        }
        else
            my_putchar(str[i]);
    }
    va_end(ap);
}