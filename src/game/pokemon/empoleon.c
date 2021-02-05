/*
** EPITECH PROJECT, 2020
** empoleon
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent_empoleon(all *all, int pok)
{
    if (pok == 1) {
        all->pokemon[1]->time = sfClock_getElapsedTime(all->pokemon[1]->cl);
        if (sfClock_getElapsedTime(all->pokemon[1]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[1]->ar.left >= 864)
                all->pokemon[1]->ar.left = 10;
            else
                all->pokemon[1]->ar.left += 103;
            sfClock_restart(all->pokemon[1]->cl);
        }
    }
}

void our_empoleon(all *all, int our)
{
    if (our == 1) {
        all->our_pok[1]->time = sfClock_getElapsedTime(all->our_pok[1]->cl);
        if (sfClock_getElapsedTime(all->our_pok[1]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[1]->ar.left >= 864)
                all->our_pok[1]->ar.left = 20;
            else
                all->our_pok[1]->ar.left += 102;
            sfClock_restart(all->our_pok[1]->cl);
        }
    }
}

void oponent_pikachu(all *all, int pok)
{
    if (pok == 5) {
        all->pokemon[5]->time = sfClock_getElapsedTime(all->pokemon[5]->cl);
        if (sfClock_getElapsedTime(all->pokemon[5]->cl).microseconds \
            >= 500000/ 3) {
            if (all->pokemon[5]->ar.left >= 450) {
                all->pokemon[5]->ar.left = 10;
                all->pokemon[5]->ar.top += 63;
            }
            else if (all->pokemon[5]->ar.top >= 315) {
                all->pokemon[5]->ar.left = 10;
                all->pokemon[5]->ar.top = 0;
            }
            else
                all->pokemon[5]->ar.left += 67;
            sfClock_restart(all->pokemon[5]->cl);
        }
    }
}

void our_pikachu(all *all, int our)
{
    if (our == 5) {
        all->our_pok[5]->time = sfClock_getElapsedTime(all->our_pok[5]->cl);
        if (sfClock_getElapsedTime(all->our_pok[5]->cl).microseconds \
            >= 500000/ 3) {
            if (all->our_pok[5]->ar.left >= 450) {
                all->our_pok[5]->ar.left = 10;
                all->our_pok[5]->ar.top += 63;
            }
            else if (all->our_pok[5]->ar.top >= 756) {
                all->our_pok[5]->ar.left = 10;
                all->our_pok[5]->ar.top = 441;
            }
            else
                all->our_pok[5]->ar.left += 67;
            sfClock_restart(all->our_pok[5]->cl);
        }
    }
}
