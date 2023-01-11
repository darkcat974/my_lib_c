/*
** EPITECH PROJECT, 2022
** unitest
** File description:
** test_my_str_to_word_array
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_str_to_word_array, testing_good_length)
{
    char **arr = my_str_to_word_array("j'aime les chats sa mere", " .:!\n\0");
    char *ver[] = {"j'aime", "les", "chats", "sa", "mere"};
    cr_assert_eq(my_arraylen(arr), 5);
}

Test(my_str_to_word_array, testing_outcome)
{
    char **arr = my_str_to_word_array("j'aime les chats sa mere", " .:!\n\0");
    char *ver[] = {"j'aime", "les", "chats", "sa", "mere"};
    for (int i = 0; arr[i]; i++) {
        cr_assert_str_eq(arr[i], ver[i]);
        free(arr[i]);
    }
    free(arr);
}

Test(my_str_to_word_array, testing_more_than_10_separations)
{
    char *var = "je suis un chat miaou miaou\n145/648/984/874/974\n";
    char ** arr = my_str_to_word_array(var, " /\n");
    char *bbb[] = {"je", "suis", "un", "chat", "miaou", "miaou", "145", "648", "984", "874", "974"};
    for (int i = 0; arr[i]; i++)
        cr_assert_str_eq(arr[i], bbb[i]);
}
