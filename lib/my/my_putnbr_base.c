/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** my_putnbr base
*/

#include "../../include/rpg.h"

int getretsize(int n, int base)
{
    int retsize = 0;

    while (n >= base) {
        n /= base;
        retsize++;
    }
    return (retsize + 1);
}

int my_putnbr_base(int nbr, char const *base)
{
    int b, a, y = 0;

    for (b = 0; base[b] != '\0'; b++);
    char ret[getretsize(nbr, b)];
    while (nbr >= b) {
        a = nbr % b;
        nbr /= b;
        ret[y++] = base[a];
    }
    ret[y] = base[nbr];
    for (int q = y; q >= 0; q--)
        my_putchar(ret[q]);
    return (0);
}
