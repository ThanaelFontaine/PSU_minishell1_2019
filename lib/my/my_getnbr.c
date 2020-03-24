/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my getnbr.c
*/

int my_getnbr(char const *str)
{
    int nomber = 0;
    int i = 0;
    int count = 0;

    for (; str[i] == '+' || str[i] == '-'; i += 1)
        if (str[i] == '-')
            count += 1;
    for (; str[i] != '\0'; i += 1) {
        if (str[i] < '0' || str[i] > '9')
            break;
            nomber = nomber * 10 + (str[i] - 48);
    }
    if (count % 2 == 1)
        nomber = nomber * (-1);
    return (nomber);
}