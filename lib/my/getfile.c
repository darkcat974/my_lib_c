/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-cedric.roulof
** File description:
** open_file
*/
#include <fcntl.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

char *open_file(char const *pathname)
{
    int fd = open(pathname, O_RDWR);
    if (fd == -1)
        return NULL;
    struct stat st;
    stat(pathname, &st);
    char *buff = malloc(sizeof(char) * st.st_size);
    read(fd, buff, st.st_size);
    close(fd);
    return buff;
}
