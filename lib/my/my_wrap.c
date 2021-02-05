/*
** EPITECH PROJECT, 2019
** wrap
** File description:
** wrap
*/

#include "../../include/rpg.h"

int my_putstr_wrap(va_list *arg)
{
    my_putstr(va_arg(*arg, char *));
}

int my_putchar_wrap(va_list *arg)
{
    my_putchar(va_arg(*arg, int));
}

int my_put_percent(va_list *arg)
{
    my_putchar('%');
}
