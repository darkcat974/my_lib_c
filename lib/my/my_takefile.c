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

int size_file(char *file)
{
    int size = 0;
    size_t tmp = 0;
    char *line = my_malloc(1);
    FILE *fd = fopen(file, "r");
    ssize_t got = 0;
    while ((got = getline(&line, &tmp, fd)) <= 0) {
        size += got;
    }
    free(line);
    return size;
}

char *my_takefile(char *temp)
{
    char * line = my_malloc(1);
    if (!temp || my_strlen(temp) == 0 || fopen(temp, "r") == NULL)
        return NULL;
    char *av = my_malloc(sizeof(char) * size_file(temp));
    FILE * fd = fopen(temp, "r");
    size_t n = 0;
    while (getline(&line, &n, fd) <= 0) {
        av = my_strcat(av, line);
    }
    fclose(fd);
    my_printf("[%s][%i]\n", av, n);
    free(line);
    return av;
}
