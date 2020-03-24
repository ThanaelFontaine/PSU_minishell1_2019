/*
** EPITECH PROJECT, 2019
** second_one
** File description:
** second_one.h
*/

#ifndef _TEST_
#define _TEST_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdarg.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/wait.h>
#include "my.h"

typedef struct node {
    char *value;
    struct node *next;
} node_t;

typedef node_t * list_t;

typedef struct second_one_s {
    char *line;
    size_t len;
    int read;
    char **str_env;
    char **str_line;
    int error;
    int verif;
    int signal;
} second_one_t;

int documentation(void);

int mini_shell(list_t list, char **env, second_one_t *second_one);
char *get_env(list_t list, char *to_find);

int main(int ac, char **av, char **env);
size_t my_arr_len(char **arr);

int command_(second_one_t *second_one, char **env);

int loop(second_one_t *second_one, char **env, list_t list);
void fork_(second_one_t *second_one, char **env, list_t list);
int select_command(second_one_t *second_one, list_t list);

void env_(second_one_t *second_one, list_t list);
void unsetenv_(list_t *list, second_one_t *second_one);
int setenv_(list_t *list, second_one_t *second_one);

void signal_(second_one_t *second_one);

void add_element_at_back(list_t *list, char *elem);

void list_delete_elem_at_back(list_t *list);

int verification_(second_one_t *second_one, list_t *list);

#endif /*_TEST_*/