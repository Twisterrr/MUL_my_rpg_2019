/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** fight
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int fight_o(all *all, int pok, int fight_int)
{
    if (fight_int == 2) {
        all->game->level = 2;
        all->pers->position.x = 900;
        all->pers->position.y = 500;
        all->map[2]->position.x = -2750;
        all->map[2]->position.y = -1800;
        sfSprite_setPosition(all->map[2]->sprite_f, all->map[2]->position);
        sfSprite_setPosition(all->pers->sprite_f, all->pers->position);
        all->pokemon[pok]->size.x = 245;
        sfRectangleShape_setSize(all->pokemon[pok]->rect,   \
        all->pokemon[pok]->size);
        sfRectangleShape_setFillColor(all->pokemon[pok]->rect, sfGreen);
        all->map[1]->position.y = 0;
        all->map[1]->position.x = -3550;
        my_lose(all);
        recovery(all);
        return 2;
    }
}

int fight_f_win(all *all, int int_fight, int pok)
{
    if (int_fight == 1) {
        all->pokemon[pok]->size.x = 245;
        sfRectangleShape_setSize(all->pokemon[pok]->rect, \
        all->pokemon[pok]->size);
        sfRectangleShape_setFillColor(all->pokemon[pok]->rect, sfGreen);
        return 1;
    }
    return 0;
}

int fight_f(all *all, int nb_pok)
{
    int pok;
    if (nb_pok == -1)
        pok = rand() % 6 + 3;
    else
        pok = nb_pok;
    for (int i = 0; all->our_inv_pok[i] != -1; i++) {
        all->pok = all->our_inv_pok[i];
        if (all->our_pok[all->pok]->size.x <= 0) continue;
        int int_fight = fight(all, pok, nb_pok);
        if (int_fight == 2 && all->our_inv_pok[i + 1] == -1) {
            fight_o(all, pok, int_fight);
            break;
        }
        int ret = fight_f_win(all, int_fight, pok);
        if (ret)
            return ret;
        if (int_fight >= 3)
            i = int_fight - 4;
    }
    return 0;
}
