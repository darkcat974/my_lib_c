/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** test_arrayadd
*/
#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_arrayadd, testing_correct_array_lenght)
{
    char **arr = my_str_to_word_array("j'aime les chats", " ");
    char **expect = my_str_to_word_array("j'aime les chats chiens", " ");
    arr = my_arrayadd(arr, "chiens");
    cr_assert_eq(my_arraylen(arr), my_arraylen(expect));
    free_arr(arr); free_arr(expect);
}

Test(my_arrayadd, testing_correct_word_lenght)
{
    char **arr = my_str_to_word_array("j'aime les chats", " ");
    char **expect = my_str_to_word_array("j'aime les chats chiens", " ");
    arr = my_arrayadd(arr, "chiens");
    for (int i = 0; arr[i]; i++)
        cr_assert_eq(my_strlen(arr[i]), my_strlen(expect[i]));
    free_arr(arr); free_arr(expect);
}

Test(my_arrayadd, testing_basic_use)
{
    char **arr = my_str_to_word_array("j'aime les chats", " ");
    char **expect = my_str_to_word_array("j'aime les chats chiens", " ");
    arr = my_arrayadd(arr, "chiens");
    for (int i = 0; arr[i]; i++)
        cr_assert_str_eq(arr[i], expect[i]);
    free_arr(arr); free_arr(expect);
}
