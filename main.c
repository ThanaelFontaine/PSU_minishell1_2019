/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** main.c
*/

#include "include/second_one.h"

size_t my_arr_len(char **arr)
{
    size_t i = 0;
    while (arr[i])
        i += 1;
    return i;
}

int main(int ac, char **av, char **env)
{
    list_t list = NULL;
    second_one_t second_one;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        documentation();
    for (int i = 0; env[i]; i += 1)
        add_element_at_back(&list, env[i]);
    mini_shell(list, env, &second_one);
    return (0);
}