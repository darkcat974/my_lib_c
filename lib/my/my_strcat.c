/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday07-florian.dajon
** File description:
** my_strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int start = my_strlen(dest);

    for (int i = 0; src[i]; i++)
        dest[i + start] = src[i];
    return dest;
}

char *my_strncat(char *dest, char const *src, int n)
{
    int start = my_strlen(dest);

    for (int i = 0; src[i] && i < n; i++)
        dest[i + start] = src[i];
    return dest;
}
