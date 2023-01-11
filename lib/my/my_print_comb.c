/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_print_comb
*/

void my_putchar(char c);

void print_this_comb(int a, int b, int c)
{
    if (c > b && b > a) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        if (c == '9' && b == '8' && a == '7')
            return;
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int a = '0';
    int b = '0';
    int c = '0';

    while (a != '8' && b != '9') {
        c++;
        print_this_comb(a, b, c);
        if (c == '9') {
            c = '0';
            b = b + 1;
        }
        if (b == '9' && a != '9') {
            b = '0';
            a++;
        }
    }
    return 0;
}
