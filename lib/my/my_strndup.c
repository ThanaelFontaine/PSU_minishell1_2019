/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_strndup.c
*/

#include <stdlib.h>

char *my_strndup(char *str, int i)
{
    char *string;
    string = malloc(sizeof(char) * (i + 1));
    int j = 0;

    while (str[j] != '\0' && j < i) {
        string[j] = str[j];
        j += 1;
    }
    string[i] = '\0';
    return (string);
}