/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday08-florian.dajon
** File description:
** my_show_word_array
*/
#include "../../include/my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
