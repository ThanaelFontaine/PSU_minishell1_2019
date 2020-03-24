/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** command.c
*/

#include "include/second_one.h"

int command_(second_one_t *second_one, char **env)
{
    for (int i = 0; second_one->str_env && second_one->str_env[i]; i += 1) {
        if (access(my_strcat(my_strcat(second_one->str_env[i], "/"),
        second_one->str_line[0]), X_OK) == 0)
            execve(my_strcat(my_strcat(second_one->str_env[i], "/"),
            second_one->str_line[0]), second_one->str_line, env);
    }
    exit (0);
}