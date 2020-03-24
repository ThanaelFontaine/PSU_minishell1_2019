/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** mini_shell.c
*/

#include "include/second_one.h"

int mini_shell(list_t list, char **env, second_one_t *second_one)
{
    second_one->line = NULL;
    second_one->len = 0;
    second_one->read = 0;
    second_one->str_env = NULL;
    second_one->error = 0;
    second_one->signal = 0;

    for (list_t tempo = list; tempo != NULL; tempo = tempo->next) {
        if (tempo->value[0] == 'P' && tempo->value[1] == 'A' &&
        tempo->value[2] == 'T' && tempo->value[3] == 'H') {
            second_one->str_env = str_to_word_array(tempo->value + 5, ':');
        }
    }
    loop(second_one, env, list);
    return (0);
}

char *get_env(list_t list, char *to_find)
{
    for (list_t tempo = list; tempo != NULL; tempo = tempo->next) {
        if (my_strncmp(tempo->value, to_find, my_strlen(to_find)) == 0)
            return (tempo->value);
    }
    return (NULL);
}