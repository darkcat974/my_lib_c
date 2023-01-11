/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (i = 0; str[i]; i++);
    i--;
    for (; i > 0; i--) {
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    }
    return 1;
}
