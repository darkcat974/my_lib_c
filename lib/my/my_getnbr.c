/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday04-florian.dajon
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nb = 0;
    int is_neg = 1;

    for (int i = 0; str[i] != '\0' && (str[i] == '+' || str[i] == '-'
    || (str[i] >= '0' && str[i] <= '9')); i++) {
        if (str[i] == '-')
            is_neg *= -1;
        if (str[i] <= '9' && str[i] >= '0') {
            nb *= 10;
            nb += str[i] - '0';
        }
        if (nb <= -1000000000 || nb >= 1000000000)
            return 0;
    }
    nb *= is_neg;
    return nb;
}
