/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** main.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char *len;
    int size = 0;
    int i = 0;
    int j = 0;
    int fd = open(av[1], O_RDONLY);
    char *firstlen = getnextline(fd);
    int numberofline = my_getnbr(firstlen);
    char **map = malloc(sizeof(char*) * (numberofline + 2));
    int count = 0;

    if (ac != 2) {
        return (84);
    }
    while ((len = getnextline(fd)) != NULL) {
        map[count] = len;
        count++;
    }
    map[count] = NULL;
    close(fd);
    find_bsq(map);
    print_map(map);
    print_square(map, i, j, size);
    return (0);
}