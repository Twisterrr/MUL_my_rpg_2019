/*
** EPITECH PROJECT, 2019
** wrap_base
** File description:
** base
*/

#include "../../include/rpg.h"

const char *base[] = {"01", "01234567", "0123456789abcdef", "0123456789ABCDEF"};

int my_putnbr_b_wrap(va_list *arg)
{
    my_putnbr_base(va_arg(*arg, int), base[0]);
}

int my_putnbr_o_wrap(va_list *arg)
{
    my_putnbr_base(va_arg(*arg, int), base[1]);
}

int my_putnbr_x_wrap(va_list *arg)
{
    my_putnbr_base(va_arg(*arg, int), base[2]);
}

int my_putnbr_big_x_wrap(va_list *arg)
{
    my_putnbr_base(va_arg(*arg, int), base[3]);
}
