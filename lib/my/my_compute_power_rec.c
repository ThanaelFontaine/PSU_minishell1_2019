/*
** EPITECH PROJECT, 2019
** power rec
** File description:
** compute power rec
*/

int my_compute_power_rec(int number, int i)
{
    if (i == 0)
        return (1);
    else if (i < 0)
        return (0);
    else {
        number = number * my_compute_power_rec(number, i);
        return (number);
    }
}