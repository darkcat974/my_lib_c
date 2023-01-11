/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday06-florian.dajon
** File description:
** my_strncpy
*/

int my_strlen(char const *str);


char *my_strncpy(char *dest, char const *src, int n)
{
    int len = my_strlen(src);

    for (int i = 0; i < n; i++) {
        if (i >= len) {
            dest[i] = '\0';
            return dest;
        }
        dest[i] = src[i];
    }
    dest[n] = '\0';
    return dest;
}
