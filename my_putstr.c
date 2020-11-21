/*
** EPITECH PROJECT, 2019
** my_putstr$
** File description:
** 
*/

#include "my.h"

void my_putstr(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        my_putchar(str[c]);
        c++;
    }
}
