/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** compter_avant.c
*/

int compter_avant(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i += 1) {
        count += 1;
    }
    return (count);
}