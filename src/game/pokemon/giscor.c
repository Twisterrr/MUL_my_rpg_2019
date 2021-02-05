/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pokemon_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_gliscor(all *all, int pok)
{
    if (pok == 8) {
        all->pokemon[8]->time = sfClock_getElapsedTime(all->pokemon[8]->cl);
        if (sfClock_getElapsedTime(all->pokemon[8]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[8]->ar.left >= 642) {
                all->pokemon[8]->ar.left = 0;
                all->pokemon[8]->ar.top += 98;
            }
            else if (all->pokemon[8]->ar.top >= 292 && \
                all->pokemon[8]->ar.left >= 107) {
                all->pokemon[8]->ar.left = 0;
                all->pokemon[8]->ar.top = 0;
            }
            else
                all->pokemon[8]->ar.left += 107;
            sfClock_restart(all->pokemon[8]->cl);
        }
    }
}

void our_gliscor(all *all, int our)
{
    if (our == 8) {
        all->our_pok[8]->time = sfClock_getElapsedTime(all->our_pok[8]->cl);
        if (sfClock_getElapsedTime(all->our_pok[8]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[8]->ar.left >= 642) {
                all->our_pok[8]->ar.left = 0;
                all->our_pok[8]->ar.top += 98;
            }
            else if (all->our_pok[8]->ar.top >= 684 && \
                all->our_pok[8]->ar.left >= 107) {
                all->our_pok[8]->ar.left = 0;
                all->our_pok[8]->ar.top = 392;
            }
            else
                all->our_pok[8]->ar.left += 107;
            sfClock_restart(all->our_pok[8]->cl);
        }
    }
}
