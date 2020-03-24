/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/wait.h>

int compter_caractere(char *str, char c);
int compter_avant(char *str, char c);
char *my_strndup(char *str, int i);
int my_compute_factorial_rec(int number);
int my_strlen(char const *str);
int my_compute_power_rec(int number, int i);
int my_compute_square_root(int number);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int number);
void my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *str, char const *src);
int my_strcmp(char const *stack_1, char const *stack_2);
char *my_strcpy(char *str, char const *source);
char *my_strdup(char const *source);
char **str_to_word_array(char *str, char c);
char *my_strncat(char *str, char const *source, int l);
int my_strncmp(char const *stack1, char const *stack2, int i);
char *my_strncpy(char *str, char const *source, int i);
int my_strtol(char *str, int base, int i);
int my_putnbr_base(int number, char *base);
int my_printf(char *str, ...);
int cleanstring(char *str);
char *the_string_clean(char *str);