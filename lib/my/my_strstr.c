/*
** EPITECH PROJECT, 2022
** str
** File description:
** str
*/
#include <stddef.h>

int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (!to_find || !str)
        return (!str) ? NULL : str;
    for (i = 0; str[i]; i++) {
        if (str[i] == to_find[0]
        && my_strncmp(str + i, to_find, my_strlen(to_find)) == 0)
            return str + i;
    }
    return str;
}
