#include "include/my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char **str = my_takefile(av[ac - 1]);
    if (!str)
        return 1;
    for (int i = 0; str[i]; i++) {
        if (!str[i])
            printf("str[%i] is null\n", i);
        else
            printf("%s\n", str[i]);
    }
    return 0;
}
