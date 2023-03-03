/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_is_sep
*/
#include "../include/my.h"
#include <criterion/criterion.h>

Test(is_sep, basic_use)
{
    char *str = "j'aime les chats";
    char *sep = " ";
    int out_come[] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1};
    for (int i = 0; str[i]; i++)
        cr_assert_eq(is_sep(str[i], sep), out_come[i]);
}
