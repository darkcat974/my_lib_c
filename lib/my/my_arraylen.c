/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday10-florian.dajon
** File description:
** my_arraylen
*/

int my_arraylen(char **arr)
{
    int len = 0;
    if (!arr) return 0;
    while (arr[len]) len++;
    return len;
}
