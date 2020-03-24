/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int number)
{
    if (number < 0) {
        number = number * (-1);
        my_putchar('-');
    }
    if (number >= 10)
        my_put_nbr(number / 10);
    number = number % 10;
    my_putchar(number + 48);
    return (0);
}