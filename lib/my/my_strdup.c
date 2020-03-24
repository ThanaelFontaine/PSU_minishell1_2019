/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup.c
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *source)
{
    char *dest;
    int j = my_strlen(source);

    dest = malloc(sizeof(char) * (j + 1));
    for (int i = 0; i <= j+1; i += 1)
        dest[i] = source[i];
    return (dest);
}