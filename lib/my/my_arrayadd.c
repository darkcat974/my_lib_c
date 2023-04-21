/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** my_arrayadd
*/
#include "../../include/my.h"

char **my_arrayadd(char **arr, char *to_add)
{
    int i = 0;
    char **dest = malloc(sizeof(char *) * (my_arraylen(arr) + 2));
    while (i < my_arraylen(arr)) {
        dest[i] = my_strdup(arr[i]);
        i++;
    } dest[i] = my_strdup(to_add);
    dest[my_arraylen(arr) + 1] = NULL;
    free_arr(arr);
    return arr = dest;
}
