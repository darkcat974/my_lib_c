/*
** EPITECH PROJECT, 2022
** my_str
** File description:
** isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (i = 0; str[i]; i++);
    i--;
    for (; i > 0; i--){
        if (str[i] < '1' || str[i] > '9')
            return 0;
    }
    return 1;
}
