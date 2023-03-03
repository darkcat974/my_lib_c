/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** is_asep
*/
#include "../../include/my.h"

int is_sep(char const c, char const *sep)
{
    for (int i = 0; sep[i]; i++)
        if (sep[i] == c)
            return 1;
    return 0;
}
