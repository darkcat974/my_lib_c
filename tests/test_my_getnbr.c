/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_my_getnbr
*/
#include "../include/my.h"
#include <criterion/criterion.h>

Test(my_getnbr, test_getnbr_regular_number)
{
    cr_assert_eq(my_getnbr("4877"), 4877);
}

Test(my_getnbr, test_getnbr_number_in_string)
{
    cr_assert_eq(my_getnbr("48chat77"), 48);
}

Test(my_getnbr, test_getnbr_negatif_number)
{
    cr_assert_eq(my_getnbr("-4877"), -4877);
}

Test(my_getnbr, test_getnbr_negatif_number_in_string)
{
    cr_assert_eq(my_getnbr("-48chat77"), -48);
}
