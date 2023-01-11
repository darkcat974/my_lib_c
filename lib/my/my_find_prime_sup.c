/*
** EPITECH PROJECT, 2022
** day05
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = 0;

    nb = (nb < 0) ? 0 : nb;
    while (nb + i >= 0 && nb + i <= 1) {
        i++;
    }
    while (my_is_prime(nb + i) != 1) {
        i++;
    }
    return i + nb;
}
