/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** putchar
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}