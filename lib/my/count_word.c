/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** count_word
*/
#include "../../include/my.h"

int count_words(char const *str, char const *sep)
{
    int y = 0;
    for (int i = 0; str[i]; i++) {
        if (is_sep(str[i], sep) == 1
        && (is_sep(str[i + 1], sep) == 0 && str[i + 1] != '\0'))
            y++;
        for (;is_sep(str[i], sep) == 1
        && (is_sep(str[i + 1], sep) == 0 && str[i + 1] != '\0'); i++);
    }
    return y;
}
