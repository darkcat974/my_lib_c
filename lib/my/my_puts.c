/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_put_nbr
*/
#include "../../include/my.h"
#include <unistd.h>

int my_putchar(char c)
{
    return write (1, &c, 1);
}

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}

int my_putnbr(int nb)
{
    int p = 1;
    int i = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb > 2147483647) {
        write(1, "0", 1);
        return 0;
    }
    for (; (nb / p) > 9; p *= 10);
    for (; p >= 1; p /= 10, i++) {
        my_putchar((nb / p) + 48);
        nb %= p;
    }
    return i;
}

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

int my_put_float(double nbr, int acc)
{
    int e = my_compute_power_rec(10, acc);
    int a = nbr;
    int b = (nbr * e) - (a * e);
    int c = 0;
    c = my_putnbr(a);
    c += my_putchar('.');
    c += my_putnbr(b);
    return c;
}
