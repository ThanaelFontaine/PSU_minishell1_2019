/*
** EPITECH PROJECT, 2019
** square root
** File description:
** my square root
*/

int my_compute_square_root(int number)
{
    for (int i = 2; i < number; i += 1)
        if (i * i == number)
            return (i);
    return (0);
}