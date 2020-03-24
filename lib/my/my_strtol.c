/*
** EPITECH PROJECT, 2019
** eval expr
** File description:
** strtol
*/


#include <limits.h>
#include <ctype.h>
#include <errno.h>
#include <stdlib.h>

int my_strlen(char const *str);

int my_strtol(char *str, int base, int i)
{
    size_t size = my_strlen(str);

    if (size == i)
        return (base);

    if (str[i] >= '0' && str[i] <= '9')
        base = base * 10 + (str[i] - 48);
    i += 1;
    my_strtol(str, base, i);
}