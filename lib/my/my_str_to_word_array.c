/*
** EPITECH PROJECT, 2022
** my_
** File description:
** to muxh to write
*/
#include "../../include/my.h"

char **my_str_to_word_array(char const *str, char const *sep)
{
    if (!str)
        return NULL;
    int nb_word = count_words(str, sep) + 1;
    int x = 0;
    int i = 0;
    char **arr = malloc(sizeof(char *) * (nb_word + 1));
    for (; i < nb_word; i++) {
        for (; str[x] && is_sep(str[x], sep); x++);
        arr[i] = malloc(sizeof(char) * (my_strlens(str + x, sep) + 1));
        arr[i] = my_strncpy(arr[i], str + x, my_strlens(str + x, sep));
        if (is_sep(str[x], sep) == 0)
            x += my_strlens(str + x, sep);
    }
    arr[i] = NULL;
    return arr;
}
