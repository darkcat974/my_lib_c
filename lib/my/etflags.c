/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-florian.dajon
** File description:
** etflags
*/
#include "../../include/my.h"

int fflag(char const *str, va_list *ap)
{
    double i = va_arg(*ap, double);
    my_spaceputs(str, my_nblen(i));
    return my_put_float(i, 6);
}
