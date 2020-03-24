/*
** EPITECH PROJECT, 2019
** factorial
** File description:
** compute factorial rec
*/

int my_compute_factorial_rec(int number)
{
    if (number == 0)
        return (0);
    else
        number = my_compute_factorial_rec(number -1 ) * number;
    if (number > 12)
        return (0);
}