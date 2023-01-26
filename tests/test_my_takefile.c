/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_my_takefile
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_takefile, test_receving_a_file)
{
    char *str = my_takefile("random.txt");
    cr_assert_str_eq(str, "chats\nchiens");
    cr_assert_eq(my_strlen(str), 12);
}

Test(my_takefile, test_receving_nothing)
{
    char *str = my_takefile("");
    cr_assert_null(str);
}
