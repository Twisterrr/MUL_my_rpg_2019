/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** get_nbr
*/

#include "../../include/rpg.h"

int limit(int i, char const *str, int ret, int neg)
{
    if (str[i] >= '0' && str[i] <= '9') {
        int r = str[i] - '0';
        if (ret > 0 && (2147483647 / ret < 10)) {
            return (0);
        }
        if (ret > 0 && (neg % 2) && (-2147483648 + ret * 10 > r)) {
            return 0;
        }
        if (ret > 0 && !(neg % 2) && (2147483647 - ret * 10 < r)) {
            return (0);
        }
        ret = ret * 10 + r;
    }
    return ret;
}

int my_getnbr(char const *str)
{
    int ret = 0;
    int neg = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            neg++;
        if ((str[i] < '0' || str[i] > '9') && (str[i] != '+' || str[i] != '-'))
            if (ret != '\0')
                break;
            else
                continue;
        ret = limit(i, str, ret, neg);
    }
    if (neg % 2)
        ret *= -1;
    return (ret);
}
