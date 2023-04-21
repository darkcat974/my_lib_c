/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_openfile
*/
#include "../include/my.h"
#include <criterion/criterion.h>

Test(open_file, test_receving_a_file)
{
    char *str = open_file("random.txt");
    cr_assert_str_eq(str, "chats\nchiens\nfusée\ncannard");
}

Test(open_file, test_receving_nothing)
{
    char *str = open_file("");
    cr_assert_null(str);
}

Test(open_file, test_directory_given)
{
    char *str = open_file("tests/");
    char *std = open_file("lib/my");
    cr_assert_null(str);
    cr_assert_null(std);
}

Test(open_file, test_reveving_empty_file)
{
    char *str = open_file("empty");
    cr_assert_null(str);
}
