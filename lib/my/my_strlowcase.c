/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_strlowecase
*/

char *my_strlowcase(char *str)
{
    if (!str)
        return str;
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    return str;
}
