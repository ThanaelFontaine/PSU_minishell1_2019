/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** my_str_to_word_array2.c
*/

#include "../../include/my.h"

int compter_caractere(char *str, char c);

int compter_avant(char *str, char c);

char *my_strndup(char *str, int a);

void help(int c, int counter, char **tableau, char *str)
{
    int i = 0;
    counter = 0;
    for (int j = 0; str[j]; j += 1) {
        if (str[j] != c && str[j] != '\n') {
            tableau[i][counter] = str[j];
            counter += 1;
        } else {
            tableau[i][counter] = '\0';
            counter += 1;
            i += 1;
            counter = 0;
        }
    }
}

char **str_to_word_array(char *str, char c)
{
    char **tableau;
    int i = 0;
    int counter = 0;

    tableau = malloc(sizeof(char *) * (compter_caractere(str, c) +
    1000));
    for (int j = 0; str[j] && str[j] != '\n'; j += 1) {
        if (str[j] != c && str[j + 1] && str[j + 1] != '\n') {
            counter += 1;
        } else {
            counter += 1;
            tableau[i] = malloc(sizeof(char * ) * (counter + 2));
            i += 1;
            counter = 0;
        }
    }
    help(c, counter, tableau, str);
    tableau[i] = NULL;
    return (tableau);
}