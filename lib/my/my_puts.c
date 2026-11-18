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

int my_putarray(char **arr)
{
    int i = 0;
    for (int i = 0; arr[i]; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
    return i;
}

int my_putnbr(int nb)
{
    long n = nb;

    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10)
        my_putnbr(n / 10);
    my_putchar((n % 10) + '0');
    return 0;
}
