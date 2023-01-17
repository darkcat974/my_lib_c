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
    char *str = open_file("../random.txt");
    cr_assert_str_eq(str, "j'aime les chats\nj'aime les chiens");
}

Test(open_file, test_receving_nothing)
{
    char *str = open_file("");
    cr_assert_str_empty(str);
}