/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "../../include/rpg.h"

const int flags_count = 10;

const struct flag flags[10] = {
    {'s', my_putstr_wrap},
    {'c', my_putchar_wrap},
    {'b', my_putnbr_b_wrap},
    {'o', my_putnbr_o_wrap},
    {'x', my_putnbr_x_wrap},
    {'X', my_putnbr_big_x_wrap},
    {'i', my_put_nbr_wrap},
    {'d', my_put_nbr_wrap},
    {'u', my_put_nbr_abs_wrap},
    {'%', my_put_percent},
};

int my_printf(char *str, ...)
{
    int a, j = 0;
    va_list arg;
    int res;
    va_start(arg, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            a = 0;
            for (int j = 0; j < flags_count; j++)
                if (str[i + 1] == flags[j].c) {
                    flags[j].f(&arg);
                    a++;
                    break;
                }
            if (a == 0) write(1, &str[i], 2);
            i += 2;
        }
        if (str[i] == '\0') break;
        write(1, &str[i], 1);
    }
    va_end(arg);
    return 0;
}
