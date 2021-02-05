/*
** EPITECH PROJECT, 2019
** my_put_nbr_abs
** File description:
** putnbrbase
*/

#include "../../include/rpg.h"

int my_put_nbr_abs(int nb)
{
    if (nb < 0)
        nb = -nb;
    if (nb < 10)
        my_putchar(nb % 10 + '0');
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return (nb);
}
