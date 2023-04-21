/*
** EPITECH PROJECT, 2023
** B-PSU-200-RUN-2-1-minishell1-florian.dajon
** File description:
** free_them
*/
#include "../../include/my.h"
#include <stdlib.h>

void free_arr(char **arr)
{
    if (!arr)
        return;
    for (int i = 0; arr[i]; i++) {
        free(arr[i]);
        arr[i] = NULL;
    } free(arr);
    arr = NULL;
}
