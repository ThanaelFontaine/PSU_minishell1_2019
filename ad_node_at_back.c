/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** ad_node.c
*/

#include "include/second_one.h"

void add_element_at_back(list_t *list, char *elem)
{
    node_t *start = *list;
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = elem;
    new_node->next = NULL;
    if (*list == NULL)
        *list = new_node;
    else {
        while (start->next) {
            start = start->next;
        }
        start->next = new_node;
    }
}