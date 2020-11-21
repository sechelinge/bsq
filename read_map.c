/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** step.c
*/
#include "my.h"
#include <stdlib.h>
#include <unistd.h>

char *getnextline(int fd)
{
    char *str = malloc(sizeof(char) * 10002);
    char buffer = -1;
    int count = 0;

    while (buffer != '\n' && buffer != '\0') {
        int size = read(fd, &buffer, 1);
        if (size == 0 && buffer != -1) {
            return (str);
        }
        if (size == 0) {
            return (NULL);
        }
        str[count] = buffer;
        count++;
    }
    str[count - 1] = '\0';
    return (str);
}
