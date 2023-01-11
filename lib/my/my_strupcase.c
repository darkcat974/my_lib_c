/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    if (!str)
        return str;
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    return str;
}
