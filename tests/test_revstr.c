/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_revstr
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_revstr, test_revstr_basic_word)
{
    char *rev = my_revstr("chat");
    cr_assert_str_eq(rev, "tahc");
}

Test(my_revstr, test_revstr_empty_str)
{
    char *rev = my_revstr("");
    cr_assert_str_empty(rev);
}
