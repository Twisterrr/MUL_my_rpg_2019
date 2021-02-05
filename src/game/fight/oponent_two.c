/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** oponent_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void oponent(all *all, int pok)
{
    oponent_torterra(all, pok);
    oponent_empoleon(all, pok);
    oponent_infernape(all, pok);
    oponent_garchomp(all, pok);
    oponent_arcanine(all, pok);
    oponent_pikachu(all, pok);
    oponent_staraptor(all, pok);
    oponent_milotic(all, pok);
    oponent_gliscor(all, pok);
    sfSprite_setTextureRect(all->pokemon[pok]->sprite_f, \
    all->pokemon[pok]->ar);
}
