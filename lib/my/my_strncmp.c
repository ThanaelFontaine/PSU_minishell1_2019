/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp.c
*/

#include <stdlib.h>

int my_strncmp(char const *stack1, char const *stack2, int i)
{
    for (int j = 0; stack1[j] && stack2[j] && j < i; j += 1) {
        if (stack1[j] != stack2[j])
            return (stack1[j] - stack2[j]);
    }
    return (0);
}