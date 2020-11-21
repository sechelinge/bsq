/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** .c
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int a = 0;
    int i = 0;
    int y = 0;

    while (str[i] != '\0') {
        if (y <= 0) {
            while (str[i] >= '0' && str[i] <= '9') {
                a = a * 10 + str[i] - 48;
                i = i + 1;
                y = y + 1;
            }
        }
        i = i + 1;
    }
    return (a);
}
