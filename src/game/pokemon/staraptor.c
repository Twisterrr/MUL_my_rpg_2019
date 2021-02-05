/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pokemon_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_staraptor(all *all, int pok)
{
    if (pok == 6) {
        all->pokemon[6]->time = sfClock_getElapsedTime(all->pokemon[6]->cl);
        if (sfClock_getElapsedTime(all->pokemon[6]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[6]->ar.left >= 672) {
                all->pokemon[6]->ar.left = 10;
                all->pokemon[6]->ar.top += 85;
            }
            else if (all->pokemon[6]->ar.top >= 85 && \
                all->pokemon[6]->ar.left >= 192) {
                all->pokemon[6]->ar.left = 10;
                all->pokemon[6]->ar.top = 0;
            }
            else
                all->pokemon[6]->ar.left += 96;
            sfClock_restart(all->pokemon[6]->cl);
        }
    }
}

void our_staraptor(all *all, int our)
{
    if (our == 6) {
        all->our_pok[6]->time = sfClock_getElapsedTime(all->our_pok[6]->cl);
        if (sfClock_getElapsedTime(all->our_pok[6]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[6]->ar.left >= 672) {
                all->our_pok[6]->ar.left = 10;
                all->our_pok[6]->ar.top += 85;
            }
            else if (all->our_pok[6]->ar.top >= 441 && \
                all->our_pok[6]->ar.left >= 192) {
                all->our_pok[6]->ar.left = 10;
                all->our_pok[6]->ar.top = 356;
            }
            else
                all->our_pok[6]->ar.left += 96;
            sfClock_restart(all->our_pok[6]->cl);
        }
    }
}
