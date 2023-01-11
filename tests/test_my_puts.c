/*
** EPITECH PROJECT, 2022
** unitest
** File description:
** test_my_puts
*/
#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, did_it_print_a_char, .init=redirect_all_stdout)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_putnbr, print_int, .init=redirect_all_stdout)
{
    my_putnbr(974);
    cr_assert_stdout_eq_str("974");
}
