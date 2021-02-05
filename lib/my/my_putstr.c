/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** my_putstr
*/

#include "../../include/rpg.h"

int my_putstr(char const *str)
{
    int r = 0;
    while (str[r] != '\0') {
        my_putchar (str[r]);
        r++;
    }
}
