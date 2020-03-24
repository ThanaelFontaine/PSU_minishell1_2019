/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** my_putnbr_base
*/

#include "../../include/my.h"

static int nbr_base(int number, int j, char *base)
{
    int i = 0;

    if (number > 0) {
        i = number % j;
        nbr_base(number / j, j, base);
        my_putchar(base[i]);
    }
    if (number < 0) {
        my_putchar('-');
        i = number % j * (-1);
        nbr_base(number / j * -1, j, base);
        my_putchar(base[i]);
    }
    return (0);
}

int my_putnbr_base(int number, char *base)
{
    if (number == 0) {
        my_putchar('0');
        return 0;
    }
    int len = my_strlen(base);
    return (nbr_base(number, len, base));
}