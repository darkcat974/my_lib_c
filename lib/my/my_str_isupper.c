/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (i = 0; str[i]; i++);
    i--;
    for (; i > 0; i--)
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    return 1;
}
