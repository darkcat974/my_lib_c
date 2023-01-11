/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_revstr
*/
#include <stdlib.h>

int my_strlen(char *str);


char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char cpy[len];

    for (int i = 0; i < len; i++) {
        cpy[i] = str[len - i - 1];
    }
    cpy[len] = '\0';
    str = cpy;
    return str;
}
