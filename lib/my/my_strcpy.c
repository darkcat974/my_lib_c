/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i]; i++)
        dest[i] = src[i];
    return dest;
}
