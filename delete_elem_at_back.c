/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** delete_elem_at_back.c
*/

#include "include/second_one.h"

void list_delete_elem_at_back(list_t *list)
{
    list_t start = *list;
    list_t tmp;

    if (start->next == NULL) {
        free(start);
        *list = NULL;
        return;
    }
    while (start->next->next) {
        start = start->next;
    }
    tmp = start->next;
    free(tmp);
    start->next = NULL;
}