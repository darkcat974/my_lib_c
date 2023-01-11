/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-florian.dajon
** File description:
** my_len
*/

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
