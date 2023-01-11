/*
** EPITECH PROJECT, 2022
** B-CPE-100-RUN-1-1-cpoolday03-florian.dajon
** File description:
** my_print_comb2
*/

void my_putchar(char c);

void print_this_comb2(int a, int b, int c, int d)
{
    if ((a <= c && b < d) || (a < c)) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(' ');
        my_putchar(c);
        my_putchar(d);
        if (a == '9' && b == '8' && c == '9' && d == '9')
            return;
        my_putchar(',');
        my_putchar(' ');
    }
}

void m_roll(int a, int b, int c, int d)
{
    while (a != '9' || b != '9' || c != '9' || d != '9') {
        print_this_comb2(a, b, c, d);
        d++;
        if (d > '9') {
            d = '0';
            c++;
        }
        if (c > '9') {
            c = '0';
            b++;
        }
        if (b > '9') {
            b = '0';
            a++;
        }
    }
}

int my_print_comb2(void)
{
    int a = '0';
    int b = '0';
    int c = '0';
    int d = '0';

    m_roll(a, b, c, d);
    return 0;
}
