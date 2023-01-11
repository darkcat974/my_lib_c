/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** checking the alphassssss
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (!str)
        return 1;
    for (i = 0; str[i]; i++);
    i--;
    for (; i > 0; i--)
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 1;
    return 0;
}
