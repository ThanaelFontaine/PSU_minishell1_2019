/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** my_strncat.c
*/

char *my_strncat(char *str, char const *source, int l)
{
    int j = 0;
    int i = 0;

    while (str[j] != '\0')
        j += 1;
    while (i != l) {
        str[j] = source[i];
        j += 1;
        i += 1;
    }
}