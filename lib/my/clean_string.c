/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** clean_string.c
*/

#include "../../include/my.h"

int cleanstring(char *str)
{
    int i = 0;
    int count = 0;

    for (; str[i] || str[i] == ' ' || str[i] == '\t'; i += 1);
    do {
        for (; str[i] == ' ' || str[i] == '\t' && str[i]; i += 1);
        count += 1;
        for (; str[i] == ' ' || str[i] == '\t'; i += 1);
    } while (str[i] != '\0');
    return (count);
}

char *the_string_clean(char *str)
{
    char *solution = malloc(sizeof(char) * cleanstring(str));
    int i = 0;
    int count = 0;

    for (; str[i] == ' ' || str[i] == '\t'; i += 1);
    do {
        if ((str[i] == ' ' || str[i] == '\t') && str[i] != 0) {
            for (; (str[i] == ' ' || str[i] == '\t') && str[i] != 0; i += 1);
            solution[count] = ' ';
            count += 1;
        } else {
            solution[count] = str[i];
            count += 1;
            i += 1;
        }
    } while (str[i] != '\0');
    solution[count - 1] = '\0';
    return (solution);
}