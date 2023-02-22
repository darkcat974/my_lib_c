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
    char *str = my_strcat("", "les chats");
    cr_assert_str_eq(str, "les chats");
    free(str);
}

Test(my_strcat, use_with_2_var)
{
    char *s1 = "j'aime ";
    char *s2 = "les chats";
    char *str = my_strcat(s1, s2);
    cr_assert_str_eq(str, "j'aime les chats");
    free(str);
}

Test(my_strcat, use_with_1_var)
{
    char *s2 = "les chats";
    char *str = my_strcat("j'aime ", s2);
    cr_assert_str_eq(str, "j'aime les chats");
    free(str);
}
