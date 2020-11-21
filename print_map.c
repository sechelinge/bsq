/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** step3.c
*/
#include "my.h"

void print_map(char **map)
{
    int count = 0;

    while (map[count] != NULL) {
     my_putstr(map[count]);
     my_putchar('\n');
    count++;
    }
}

void print_square(char **map, int i, int j, int size)
{
    int a = 0;
    int b = 0;

    while (a != size) {
        b = 0;
        while (b != size) {
            map[j + b][i + a] = 'x';
            b++;
        }
        a ++;
    }
}