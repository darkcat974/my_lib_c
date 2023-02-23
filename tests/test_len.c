/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_my_len
*/
#include "../include/my.h"
#include <criterion/criterion.h>

Test(my_strlen, basic_use)
{
    cr_assert_eq(my_strlen("j'aime les chats"), 16);
}

Test(my_strlen, no_arg)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlens, basic_use)
{
    cr_assert_eq(my_strlens("j'aime les chats", " "), 6);
}

Test(my_strlens, no_sep)
{
    cr_assert_eq(my_strlens("j'aime les chats", ""), 16);
}

Test(my_strlens, no_arg)
{
    cr_assert_eq(my_strlens("", ""), 0);
}

Test(my_nblen, basic_use)
{
    cr_assert_eq(my_nblen(97460), 5);
}

Test(my_nblen, no_arg)
{
    int i = 0;
    cr_assert_eq(my_nblen(i), 1);
}
