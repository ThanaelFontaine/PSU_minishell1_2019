/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare one string's length to another
*/

int my_strcmp(char const *str1, char const *str2)
{
    for (int i = 0; str1[i] || str2[i]; i += 1)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    return (0);
}