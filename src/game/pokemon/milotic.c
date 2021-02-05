/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pokemon_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_milotic(all *all, int pok)
{
    if (pok == 7) {
        all->pokemon[7]->time = sfClock_getElapsedTime(all->pokemon[7]->cl);
        if (sfClock_getElapsedTime(all->pokemon[7]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[7]->ar.left >= 891) {
                all->pokemon[7]->ar.left = 0;
                all->pokemon[7]->ar.top += 81;
            }
            else if (all->pokemon[7]->ar.top >= 162 && \
                all->pokemon[7]->ar.left >= 396) {
                all->pokemon[7]->ar.left = 0;
                all->pokemon[7]->ar.top = 0;
            }
            else
                all->pokemon[7]->ar.left += 99;
            sfClock_restart(all->pokemon[7]->cl);
        }
    }
}

void our_milotic(all *all, int our)
{
    if (our == 7) {
        all->our_pok[7]->time = sfClock_getElapsedTime(all->our_pok[7]->cl);
        if (sfClock_getElapsedTime(all->our_pok[7]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[7]->ar.left >= 945) {
                all->our_pok[7]->ar.left = 0;
                all->our_pok[7]->ar.top += 84;
            }
            else if (all->our_pok[7]->ar.top >= 662 && \
                all->our_pok[7]->ar.left >= 420) {
                all->our_pok[7]->ar.left = 0;
                all->our_pok[7]->ar.top = 500;
            }
            else
                all->our_pok[7]->ar.left += 105;
            sfClock_restart(all->our_pok[7]->cl);
        }
    }
}
