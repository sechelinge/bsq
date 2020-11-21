/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my.h
*/
#ifndef NULL
#define NULL ((void*) 0 )
#endif
char *getnextline(int fd);
int my_getnbr(char const *str);
void find_bsq(char **map);
void find_bsq(char **map);
int is_square_possible(char **map, int x, int y, int size);
void print_square(char **map, int i, int j, int size);
void my_putchar(char c);
void print_map(char **map);
void my_putstr(char const *str);