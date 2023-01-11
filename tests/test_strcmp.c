/*
** EPITECH PROJECT, 2022
** unitest
** File description:
** test_strcmp
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_strncmp, testing_n_cmp_s1_greater)
{
    cr_assert_eq(my_strncmp("j'aime les chats", "j'aime", 17), 1);
}

Test(my_strncmp, testing_n_cmp_s2_greater)
{
    cr_assert_eq(my_strncmp("j'aime", "j'aime les chats", 17), -1);
}

Test(my_strncmp, testing_n_cmp_no_arg)
{
    cr_assert_eq(my_strncmp(NULL, NULL, 0), 0);
}

Test(strcmp, testing_cmp_s1_greater)
{
    cr_assert_eq(my_strcmp("j'aime les chats", "j'aime"), 1);
}

Test(my_strcmp, testing_cmp_s2_greater)
{
    cr_assert_eq(my_strcmp("j'aime", "j'aime les chats"), -1);
}

Test(my_strcmp, testing_cmp_no_arg)
{
    cr_assert_eq(my_strcmp(NULL, NULL), 0);
}

Test(my_str_isupper, testing_isuppercase)
{
    cr_assert_eq(my_str_isupper("AZERTYUIOP"), 1);
    cr_assert_eq(my_str_isupper("aerge"), 0);
    cr_assert_eq(my_str_isupper(NULL), 0);
}

Test(my_str_islower, testing_islower)
{
    cr_assert_eq(my_str_islower("azerty"), 1);
    cr_assert_eq(my_str_islower("AZERTY"), 0);
    cr_assert_eq(my_str_islower(NULL), 0);
}

Test(my_str_isnum, testing_isnum)
{
    cr_assert_eq(my_str_isnum("1253129"), 1);
    cr_assert_eq(my_str_isnum("AZEzaerfg12"), 0);
    cr_assert_eq(my_str_isnum(NULL), 0);
}

Test(my_str_isprintable, testing_printable_str)
{
    cr_assert_eq(my_str_isprintable("aergf1234AZEG"), 1);
    cr_assert_eq(my_str_isprintable(NULL), 0);
}
