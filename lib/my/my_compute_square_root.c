/*
** EPITECH PROJECT, 2022
** squre root
** File description:
** find the square root of a number given
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i != nb) {
        if (i * i > nb)
            return 0;
        i++;
    }
    return i;
}
