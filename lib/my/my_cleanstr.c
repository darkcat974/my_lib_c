/*
** EPITECH PROJECT, 2023
** B-PSU-200-RUN-2-1-minishell2-florian.dajon
** File description:
** my_cleanstr
*/
#include "../../include/my.h"

char *my_cleanstr(char *str, char const *sep)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) - count_sep(str, sep)));
    int y = 0;
    for (int i = 0; str[i]; i++)
        if (is_sep(str[i], sep) == 0) {
            new[y] = str[i];
            y++;
        }
    new[y] = '\0';
    return new;
}
