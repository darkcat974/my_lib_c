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
    for (int i = 0; src[i] != '\0'; i++)
        cpy[i] = src[i];
    cpy[my_strlen(src)] = '\0';
    return cpy;
}
