/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-miniprintf-florian.dajon
** File description:
** mini_printf
*/
#include "../../include/my.h"

int my_spaceputs(char const *str, int len)
{
    int i = my_getnbr(str + 1);

    if (str[0] == ' ') {
        for (int y = 0; y < i - len; y++)
            my_putchar(' ');
    }
    return my_nblen(i) + 1;
}

int flagdot(char const *str, va_list *ap)
{
    int i = my_getnbr(str);
    return my_put_float(va_arg(*ap, double), i);
}

int my_put_args(char const *str, va_list *ap)
{
    char fs[] = {'s', 'c', 'i', 'd', 'S', 'b', 'f', '\0'};
    fc ff[] = {&sflag, &cflag, &iflag, &iflag, &upsflag, &bflag, &fflag, NULL};

    for (int i = 0; fs[i]; i++) {
        if (str[0] == fs[i])
            return ff[i](str, ap);
    }
    return 1;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int y = 0;

    va_start(ap, format);
    for (; format[i]; i++) {
        if (format[i] == '%' && format[i + 1] == '.') {
            i += 2;
            y += flagdot(format + i, &ap);
            i += 2;
        }
        if (format[i] == '%' && format[i + 1] != '.') {
            i++;
            y += my_put_args(format + i, &ap);
        } else
            my_putchar(format[i]);
    }
    va_end(ap);
    return i + y;
}
