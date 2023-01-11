/*
** EPITECH PROJECT, 2022
** unitest
** File description:
** test_strstr
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_strstr, testing_my_strstr_basic_str)
{
    cr_assert_str_eq(my_strstr("j'aime les chats", "les"), "les chats");
}

Test(my_strstr, testing_my_strstr_no_needle)
{
    cr_assert_str_eq(my_strstr("j'aime les chats", NULL), "j'aime les chats");
}

Test(my_strstr, testing_my_strstr_no_str)
{
    cr_assert_eq(my_strstr(NULL, "aegr"), 0);
}

Test(my_strstr, testing_no_args)
{
    cr_assert_eq(my_strstr(NULL, NULL), 0);
}
