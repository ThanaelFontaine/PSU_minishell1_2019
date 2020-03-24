/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** setenv_and_other.c
*/

#include "include/second_one.h"

void env_(second_one_t *second_one, list_t list)
{
    if ((my_strcmp(second_one->str_line[0], "env") == 0) ||
    ((my_strcmp(second_one->str_line[0], "setenv") == 0) &&
    !second_one->str_line[1]))
        for (list_t tempo = list; tempo != NULL; tempo = tempo->next)
            my_printf("%s\n", tempo->value);
}

void unsetenv_(list_t *list, second_one_t *second_one)
{
    int turn = 0;
    char **buffer;

    for (list_t tempo = *list; tempo != NULL; tempo = tempo->next) {
        buffer = str_to_word_array(tempo->value, '=');
        turn = my_strcmp(buffer[0], second_one->str_line[1]);
        if (turn == 0) {
            list_delete_elem_at_back(list);
        }
    }
}

int setenv_(list_t *list, second_one_t *second_one)
{
    if ((my_strcmp(second_one->str_line[0], "setenv") == 0) &&
    second_one->str_line[1] && second_one->str_line[2] != NULL) {
        verification_(second_one, list);
    } else if ((my_strcmp(second_one->str_line[0], "setenv") == 0) &&
    second_one->str_line[1] && second_one->str_line[2] == NULL) {
        if ((second_one->str_line[1][0] >= 'a' && second_one->str_line[1][0]
        <= 'z') || (second_one->str_line[1][0] >= 'A' &&
        second_one->str_line[1][0] <= 'Z')) {
            add_element_at_back(list,
            my_strcat(my_strcat(second_one->str_line[1], "="),
            "\0"));
        }
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return (0);
    }
    return (0);
}

int verification_(second_one_t *second_one, list_t *list)
{
    if (my_arr_len(second_one->str_line) > 3) {
        my_putstr("setenv: Too many arguments.\n");
        return (0);
    }
    if ((second_one->str_line[1][0] >= 'a' && second_one->str_line[1][0]
    <= 'z') || (second_one->str_line[1][0] >= 'A' &&
    second_one->str_line[1][0] <= 'Z')) {
        add_element_at_back(list,
        my_strcat(my_strcat(second_one->str_line[1], "="),
        second_one->str_line[2]));
        return (0);
    }
    my_putstr("setenv: Variable name must begin with a letter.\n");
    return (0);
}