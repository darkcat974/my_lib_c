/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-florian.dajon
** File description:
** difflags
*/
#include "../../include/my.h"

int iflag(char const *str, va_list *ap)
{
    int i = va_arg(*ap, int);
    my_spaceputs(str, my_nblen(i));
    return my_putnbr(i);
}

int cflag(char const *str, va_list *ap)
{
    int i = va_arg(*ap, int);
    my_spaceputs(str, my_nblen(i));
    return my_putchar(i);
}

int sflag(char const *str, va_list *ap)
{
    char *i = va_arg(*ap, char *);
    my_spaceputs(str, my_strlen(i));
    return my_putstr(i);
}

int upsflag(char const *str, va_list *ap)
{
    char *rts = va_arg(*ap, char *);
    my_spaceputs(str, my_strlen(rts));
    int l = 0;
    int tg = my_strlen(rts);

    for (int i = 0; i < tg; i++) {
        if (IS_PRINTABLE(rts[i]) == 0) {
            l += my_putchar('\\');
            l += my_putnbr_base((unsigned char) rts[i], "01234567");
        } else
            l += my_putchar(rts[i]);
    }
    return l;
}

int bflag(char const *str, va_list *ap)
{
    int i = va_arg(*ap, int);
    my_spaceputs(str, my_nblen(i));
    return my_putnbr_base(i, "01");
}
