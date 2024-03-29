/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday07-florian.dajon
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <errno.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <signal.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <string.h>
    #define IS_PRINTABLE(c)((((c) < (32)) || ((c) > (126))) ? (0) : (1))

typedef struct info {
    size_t ls;
    char **env;
    char **path;
    char **arr;
    char *line;
    int exit;
    int exstat;
}info_t;

typedef int (*fc)(char const *str, va_list *ap);
int my_printf(const char *format, ...);
int iflag(char const *str, va_list *ap);
int cflag(char const *str, va_list *ap);
int sflag(char const *str, va_list *ap);
int bflag(char const *str, va_list *ap);
int fflag(char const *str, va_list *ap);
int upsflag(char const *str, va_list *ap);
struct info_param *my_params_to_array(int ac, char **av);
char **my_str_to_word_array(char const *str, char const *sep);
int my_show_word_array(char * const *tab);
int my_isaplhanum(char c);
int my_show_word_array(char * const *tab);
char *concat_param(int ac, char **av);
int my_putchar(char c);
int my_isneg(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
void my_putcharerr(char c);
int my_puterr(char *str);
int my_strlen(char const *str);
int my_strlens(char const *str, char const *end);
int my_arraylen(char **arr);
char **my_arraydup(char **arr);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
int my_put_float(int nbr, int ac);
int my_str_isprintable(char const *str);
int my_putnbr(int nb);
int my_putarray(char **arr);
int my_putnbr_base(int nb, char const *base);
int my_nblen(int nb);
int my_printf(const char *format, ...);
int my_compute_power_rec(int nb, int p);
int my_spaceputs(char const *str, int len);
char *open_file(char const *pathname);
char *my_takefile(char *temp);
int count_sep(char const *str, char const *sep);
char *my_cleanstr(char *str, char const *sep);
void free_arr(char **arr);
int count_words(char const *str, char const *sep);
int is_sep(char const c, char const *sep);
char **my_arrayadd(char **arr, char *to_add);

#endif
