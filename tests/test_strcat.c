/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_my_strcat
*/
#include "../include/my.h"
#include <criterion/criterion.h>

Test(my_strcat, basic_use)
{
    char *str = my_strcat("j'aime ", "les chats");
    cr_assert_str_eq(str, "j'aime les chats");
    free(str);
}

Test(my_strcat, arg_null)
{
    char *str = my_strcat(NULL, "les chats");
    cr_assert_str_eq(str, "les chats");
    free(str);
}
