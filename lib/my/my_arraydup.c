/*
** EPITECH PROJECT, 2023
** B-PSU-200-RUN-2-1-minishell1-florian.dajon
** File description:
** my_arraydup
*/
#include "../../include/my.h"

char **my_arraydup(char **arr)
{
    if (!arr)
        return NULL;
    char **cpy = malloc(sizeof(char *) * (my_arraylen(arr) + 1));
    for (int i = 0; arr[i]; i++) {
        cpy[i] = my_strdup(arr[i]);
    } cpy[my_arraylen(arr)] = NULL;
    return cpy;
}
