/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_print_alpha
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    for (int i = 'a'; i <= 'z'; i++)
        my_putchar(i);
    return 0;
}
