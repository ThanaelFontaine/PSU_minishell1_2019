/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** core_dump.c
*/

#include "include/second_one.h"

void signal_(second_one_t *second_one)
{
    second_one->signal = WTERMSIG(second_one->error);
    if (second_one->signal == SIGFPE) {
        my_putstr("Floating exeption");
        if (__WCOREDUMP(second_one->error))
            my_putstr(" (core dumped)");
        my_putchar('\n');
    } else if (second_one->error != 0) {
        my_printf("%s", strsignal(second_one->error));
        if (__WCOREDUMP(second_one->error))
            my_putstr(" (core dumped)");
        my_putchar('\n');
    }
}