/*
** EPITECH PROJECT, 2023
** B-PSU-200-RUN-2-1-minishell1-florian.dajon
** File description:
** my_put_speacials
*/
#include "../../include/my.h"

int my_putnbr_base(int nb, char const *base)
{
    int i = 0;
    int e = my_strlen(base);
    int tmp;

    while ((nb / e) > my_strlen(base) - 1)
        e *= my_strlen(base);
    while (e >= 1) {
        tmp = nb / e;
        my_putchar(base[tmp]);
        nb %= e;
        e /= my_strlen(base);
        i++;
    }
    return i;
}

int my_put_float(int nbr, int ac)
{
    int e = my_compute_power_rec(10, ac);
    int a = nbr;
    int b = (nbr * e) - (a * e);
    int c = 0;
    c = my_putnbr(a);
    c += my_putchar('.');
    c += my_putnbr(b);
    return c;
}

void my_putcharerr(char c)
{
    write(2, &c, 1);
}

int my_puterr(char *str)
{
    write(2, str, my_strlen(str));
    return my_strlen(str);
}
