/*
** EPITECH PROJECT, 2020
** torterra
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_torterra(all *all, int pok)
{
    if (pok == 0) {
        all->pokemon[0]->time = sfClock_getElapsedTime(all->pokemon[0]->cl);
        if (sfClock_getElapsedTime(all->pokemon[0]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[0]->ar.left >= 855)
                all->pokemon[0]->ar.left = 0;
            else
                all->pokemon[0]->ar.left += 95;
            sfClock_restart(all->pokemon[0]->cl);
        }
    }
}

void our_torterra(all *all, int our)
{
    if (our == 0) {
        all->our_pok[0]->time = sfClock_getElapsedTime(all->our_pok[0]->cl);
        if (sfClock_getElapsedTime(all->our_pok[0]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[0]->ar.left >= 855)
                all->our_pok[0]->ar.left = 0;
            else
                all->our_pok[0]->ar.left += 96;
            sfClock_restart(all->our_pok[0]->cl);
        }
    }
}