/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday08-florian.dajon
** File description:
** my_isalphanum
*/
#include "../../include/my.h"

int my_isaplhanum(char c)
{
    if ((c < '0' || c > '9') && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
        return 0;
    return 1;
}
