/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** compter_caractere.c
*/

int compter_caractere(char *str, char c)
{
    int count = 1;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == c)
            count += 1;
    }
    return (count);
}