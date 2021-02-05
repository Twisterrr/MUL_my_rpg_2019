/*
** EPITECH PROJECT, 2020
** infernape
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_infernape(all *all, int pok)
{
    if (pok == 2) {
        all->pokemon[2]->time = sfClock_getElapsedTime(all->pokemon[2]->cl);
        if (sfClock_getElapsedTime(all->pokemon[2]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[2]->ar.left >= 864)
                all->pokemon[2]->ar.left = 10;
            else
                all->pokemon[2]->ar.left += 96;
            sfClock_restart(all->pokemon[2]->cl);
        }
    }
}

void our_infernape(all *all, int our)
{
    if (our == 2) {
        all->our_pok[2]->time = sfClock_getElapsedTime(all->our_pok[2]->cl);
        if (sfClock_getElapsedTime(all->our_pok[2]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[2]->ar.left >= 864)
                all->our_pok[2]->ar.left = 0;
            else
                all->our_pok[2]->ar.left += 98;
            sfClock_restart(all->our_pok[2]->cl);
        }
    }
}