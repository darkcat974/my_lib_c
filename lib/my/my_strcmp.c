/*
** EPITECH PROJECT, 2022
** cmp
** File description:
** 2 str
*/

int my_strcmp(char const *s1, char const *s2)
{
    if (!s1 && !s2)
        return 0;
    for (int i = 0; s1[i] || s2[i]; i++) {
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}
