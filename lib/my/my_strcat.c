/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include <stdio.h>
#include "../../include/second_one.h"

char *my_strcat(char *str, char const *source)
{
    int i = 0;
    char *result = malloc(sizeof(char) * (my_strlen(str) +
    my_strlen(source) + 1));

    for (int j = 0; str[j]; j += 1) {
        result[i++] = str[j];
    }
    for (int j = 0; source[j]; j += 1) {
        result[i++] = source[j];
    }
    result[i] = '\0';
    return (result);
}