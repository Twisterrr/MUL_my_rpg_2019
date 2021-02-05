/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** int_to_str
*/

#include "../../include/rpg.h"

void count_nb(int nb, int *a)
{
    if (nb < 10) {
        *a = *a + 1;
    }
    if (nb >= 10) {
        count_nb(nb / 10, a);
        *a = *a + 1;
    }
}

char *do_int_to_str(int nb, char *str, int *i)
{
    if (nb < 10) {
        str[*i] = nb + '0';
        *i = *i + 1;
    }
    if (nb >= 10) {
        do_int_to_str(nb / 10, str, i);
        str[*i] = (nb % 10) + '0';
        *i = 1 + *i;
    }
    return (str);
}

char *int_to_str(int nb, char *str)
{
    int a = 0;
    int i = 0;
    count_nb(nb, &a);
    str = malloc(sizeof(char) * (a + 1));

    str = do_int_to_str(nb, str, &i);
    str[a] = '\0';
    return (str);
}