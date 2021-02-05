/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** garchomp
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_garchomp(all *all, int pok)
{
    if (pok == 3) {
        all->pokemon[3]->time = sfClock_getElapsedTime(all->pokemon[3]->cl);
        if (sfClock_getElapsedTime(all->pokemon[3]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[3]->ar.left >= 742)
                all->pokemon[3]->ar.left = 0;
            else
                all->pokemon[3]->ar.left += 106;
            sfClock_restart(all->pokemon[3]->cl);
        }
    }
}

void our_garchomp(all *all, int our)
{
    if (our == 3) {
        all->our_pok[3]->time = sfClock_getElapsedTime(all->our_pok[3]->cl);
        if (sfClock_getElapsedTime(all->our_pok[3]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[3]->ar.left >= 742)
                all->our_pok[3]->ar.left = 0;
            else
                all->our_pok[3]->ar.left += 106;
            sfClock_restart(all->our_pok[3]->cl);
        }
    }
}