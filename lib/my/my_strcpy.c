/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *str, char const *source)
{
    int i = 0;

    while (source[i] != '\0') {
        str[i] = source[i];
        i += 1;
    }
    return (str);
}