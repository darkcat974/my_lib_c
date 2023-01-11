/*
** EPITECH PROJECT, 2022
** my_compute_power_it
** File description:
** do the power math in rec c
*/

int my_compute_power_rec(int nb, int p)
{
    p = (p == 0) ? 1 : p;
    nb = (p < 0) ? 0 : nb;
    if (p <= 0)
        return 0;
    if (p == 1)
        return nb;
    return nb *= my_compute_power_rec(nb, p - 1);
}
