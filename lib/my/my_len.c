/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-florian.dajon
** File description:
** my_len
*/

int find_sep(char c, char const *sep, int i)
{
    for (int y = 0; sep[y]; y++)
        if (c == sep[y]) return i;
    return -1;
}

int my_strlens(char const *str, char const *end)
{
    int i = 0;
    while (str[i]) {
        if (find_sep(str[i], end, i) >= 0) break;
        i++;
    } return i;
}

int my_strlen(char const *str)
{
    int i = 0;
    if (!str) return 0;
    while (str[i]) i++;
    return i;
}

int my_nblen(int nb)
{
    int i = 1;
    for (int p = 1; (nb / p) > 9; p *= 10, i++);
    return i;
}
