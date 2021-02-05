/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_oponent
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int openent_physical(all *all, int our, int pok, int i)
{
    int degat = all->our_pok[our]->size.x;
    float nom = nominator(all->pokemon[pok]->stat->att, \
    all->pokemon[pok]->attack[i]);
    float dem = denominator(all->our_pok[our]->stat->def);
    float resis = res(all, all->pokemon[pok]->attack[i]->type, our);
    degat -= 245 * ((((nom/dem)+2)*0.85)*resis)/all->our_pok[our]->stat->pv;
    return (degat);
}

int openent_spe(all *all, int our, int pok, int i)
{
    int degat = all->our_pok[our]->size.x;
    float nom = nominator(all->pokemon[pok]->stat->att_spe, \
    all->pokemon[pok]->attack[i]);
    float dem = denominator(all->our_pok[our]->stat->def_spe);
    float resis = res(all, all->pokemon[pok]->attack[i]->type, our);
    degat -= 245 * ((((nom/dem)+2)*0.85)*resis)/all->our_pok[our]->stat->pv;
    return (degat);
}

void wait_opponent_three(all *all, int pok, int our)
{
    sfRenderWindow_drawSprite(all->w, all->pokemon[pok]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->our_pok[our]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
    name_wild_pok(all, pok);
    name_our_pok(all, our);
    what_att_for_our_pok(all, our);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}