/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_isneg
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    if (n < 0)
        my_putchar('N');
    return 0;
}
