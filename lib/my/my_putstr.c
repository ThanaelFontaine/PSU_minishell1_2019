/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** put_str
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        my_putchar(str[i]);
}