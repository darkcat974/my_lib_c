/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday07-florian.dajon
** File description:
** my_strcat
*/
#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    char *str = my_malloc(sizeof(char)
    * (my_strlen(dest) + my_strlen(src) + 2));
    int start = my_strlen(dest);
    for (int i = 0; i < my_strlen(dest); i++)
        str[i] = dest[i];
    for (int i = 0; i < my_strlen(src); i++)
        str[i + start] = src[i];
    str[my_strlen(dest) + my_strlen(src)] = '\0';
    return str;
}

char *my_strncat(char *dest, char const *src, int n)
{
    int start = my_strlen(dest);

    for (int i = 0; src[i] && i < n; i++)
        dest[i + start] = src[i];
    return dest;
}
