/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** my_takefile
*/
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../include/my.h"
#include <stdio.h>

char *my_takefile(char const *pathname)
{
    int fd = open(pathname, O_RDONLY);
    char *tmp = malloc(sizeof(char) * 20);
    char *str;
    int r = 0;
    int i = 0;
    if (!pathname || fd == -1)
        return NULL;
    while (read(fd, tmp, 20))
        i += 20;
    str = malloc(sizeof(char) * i);
    close(fd);
    fd = open(pathname, O_RDONLY);
    while ((r = read(fd, tmp, 20)) != 0)
        str = my_strcat(str, tmp);
    close(fd);
    return str;
}
