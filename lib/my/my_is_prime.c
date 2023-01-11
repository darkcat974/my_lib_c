/*
** EPITECH PROJECT, 2022
** somewhere
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int i = 2;
    int y = 2;

    while (i * y <= nb) {
        while (i * y < nb){
            y++;
        }
        if (i * y == nb && (i < nb && y < nb))
            return 0;
        i++;
    }
    return 1;
}
