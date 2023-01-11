/*
** EPITECH PROJECT, 2022
** str
** File description:
** duplicate
*/
#include "../../include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *cpy = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (int i = 0; src[i]; i++)
        cpy[i] = src[i];
    return cpy;
}
