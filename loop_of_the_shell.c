/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** loop_of_the_shell.c
*/

#include "include/second_one.h"

int loop(second_one_t *second_one, char **env, list_t list)
{
    while (second_one->error == 0) {
        if (isatty(0) > 0)
            my_printf("§>>");
        if ((second_one->read = getline(&second_one->line, &second_one->len,
        stdin)) == -1)
            return (0);
        if (my_strlen(second_one->line) == 1)
            continue;
        second_one->line = the_string_clean(second_one->line);
        second_one->str_line = str_to_word_array(second_one->line, ' ');
        fork_(second_one, env, list);
    }
    return (0);
}

void fork_(second_one_t *second_one, char **env, list_t list)
{
    if (fork() == 0) {
        command_(second_one, env);
        exit(0);
    } else {
        wait(&second_one->error);
        select_command(second_one, list);
    }
}

int select_command(second_one_t *second_one, list_t list)
{
    if (my_strcmp(second_one->str_line[0], "cd") == 0)
        chdir(second_one->str_line[1]);
    if (my_strcmp(second_one->str_line[0], "exit") == 0)
        exit (0);
    env_(second_one, list);
    setenv_(&list, second_one);
    if ((my_strcmp(second_one->str_line[0], "unsetenv") == 0)) {
        if (my_arr_len(second_one->str_line) < 2) {
            my_putstr("unsetenv: Too few arguments.\n");
            return (0);
        }
        unsetenv_(&list, second_one);
    }
    return (0);
}