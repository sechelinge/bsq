/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** step2.c
*/
#include "my.h"

int is_square_possible(char **map, int x, int y, int size)
{
    int a = 0;
    int b = 0;

    while (a < size) {
        b = 0;
        if (map[y + a] == NULL) {
            return (0);
        }
        while (b < size) {
            if (map[y +a][x +b] == '\0') {
                return (0);
            }
            if (map[y + a][x + b] == 'o')
                return (0);
            b ++;
        }
        a ++;
    }
    return (1);
}

void find_bsq(char **map)
{
    int size = 0;
    int x = 0;
    int y = 0;
    int i = 0;
    int j = 0;

    while (map[y] != NULL) {
        x = 0;
        while (map[y][x] != '\0') {
            while (is_square_possible(map, x, y, size + 1) == 1) {
                size ++;
                i = x;
                j = y;
            }
            x++;
        }
        y++;
    }
    print_square(map, i, j, size);
}