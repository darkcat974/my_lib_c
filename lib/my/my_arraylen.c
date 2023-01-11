/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday10-florian.dajon
** File description:
** my_arraylen
*/

int my_arraylen(char **arr)
{
    int len = 0;

    for (; arr[len]; len++);
    return len;
}
