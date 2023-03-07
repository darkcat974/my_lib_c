/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-florian.dajon
** File description:
** my_len
*/
#include "../../include/my.h"

int my_strlens(char const *str, char const *end)
{
    int i = 0;
    for (; str[i]; i++)
        if (is_sep(str[i], end) == 1)
            return i;
    return i;
}

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return i;
}

int my_nblen(int nb)
{
    int i = 1;
    for (int p = 1; (nb / p) > 9; p *= 10, i++);
    return i;
}

int my_arraylen(char **arr)
{
    int i = 0;
    for (; arr[i]; i++);
    return i;
}
