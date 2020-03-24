/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse str
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int m = 0;
    char temp;

    while (str[m])
        m += 1;
    m -= 1;
    j = m;
    while (i <= m/2) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i += 1;
        j -= 1;
    }
    return (str);
}