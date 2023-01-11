/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_print_revalpha
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (int i = 'z'; i >= 'a'; i--)
        my_putchar(i);
    return 0;
}
