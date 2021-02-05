/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pokemon_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_arcanine(all *all, int pok)
{
    if (pok == 4) {
        all->pokemon[4]->time = sfClock_getElapsedTime(all->pokemon[4]->cl);
        if (sfClock_getElapsedTime(all->pokemon[4]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[4]->ar.left >= 680)
                all->pokemon[4]->ar.left = 0;
            else
                all->pokemon[4]->ar.left += 85;
            sfClock_restart(all->pokemon[4]->cl);
        }
    }
}

void our_arcanine(all *all, int our)
{
    if (our == 4) {
        all->our_pok[4]->time = sfClock_getElapsedTime(all->our_pok[4]->cl);
        if (sfClock_getElapsedTime(all->our_pok[4]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[4]->ar.left >= 680)
                all->our_pok[4]->ar.left = 0;
            else
                all->our_pok[4]->ar.left += 85;
            sfClock_restart(all->our_pok[4]->cl);
        }
    }
}