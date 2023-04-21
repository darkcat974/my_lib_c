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
