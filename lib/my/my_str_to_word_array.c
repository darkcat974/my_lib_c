/*
** EPITECH PROJECT, 2022
** my_
** File description:
** to muxh to write
*/
#include "../../include/my.h"

int separaters(char const *str, char c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return 1;
    return 0;
}

char *change_that(char const *sep, char *str)
{
    for (int i = 0; str[i]; i++) {
        if (separaters(sep, str[i]) == 1)
            str[i] = '\0';
    }
    return str;
}

char **my_str_to_word_array(char const *str, char const *sep)
{
    int y = 0;
    char *cpy = my_strdup(str);
    int len_word = my_strlen(str);
    char **dest = malloc(sizeof(char *) * (len_word + 1));
    cpy = change_that(sep, cpy);

    for (int i = 0; i < len_word; i++) {
        while (cpy[i] == '\0')
            i++;
        dest[y] = my_strdup(cpy + i);
        i += my_strlen(dest[y]);
        y++;
    }
    dest[len_word] = NULL;
    free(cpy);
    return dest;
}
