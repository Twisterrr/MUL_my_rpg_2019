/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** attack_pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void attack_our_pok_two(all *all, int pok, int our)
{
    color_pv(all->pokemon[pok]);
    sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRectangleShape_setSize(all->pokemon[pok]->rect, all->pokemon[pok]->size);
    sfRenderWindow_drawSprite(all->w, \
    all->board1[all->our_pok[our]->board1]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board2[all->our_pok[our]->board2]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board3[all->our_pok[our]->board3]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board4[all->our_pok[our]->board4]->sprite_f, NULL);
    attack_our_pok_four(all, pok, our);
}

void attack_our_pok_three(all *all, int pok, int our)
{
    if (sfClock_getElapsedTime(all->dresseur->cl).microseconds >= 5000/ 3) {
        all->pokemon[pok]->size.x -= 1;
        sfClock_restart(all->dresseur->cl);
    }
    sfRenderWindow_clear(all->w, sfWhite);
    oponent(all, pok);
    our_pok_move(all, our);
    attack_our_pok_two(all, pok, our);
}

void attack_our_pok(all *all, int pok, int our, int i)
{
    anim_att(all, our, pok, i);
    int degat = all->pokemon[pok]->size.x;
    if (all->our_pok[our]->attack[i]->type_att == 0) {
        float nom = nominator(all->our_pok[our]->stat->att, \
        all->our_pok[our]->attack[i]);
        float dem = denominator(all->pokemon[pok]->stat->def);
        float resis = res(all, all->our_pok[our]->attack[i]->type, pok);
        degat -= 245 * ((((nom/dem)+2)*0.85)*resis)/all->pokemon[pok]->stat->pv;
    }
    else {
        float nom = nominator(all->our_pok[our]->stat->att_spe, \
        all->our_pok[our]->attack[i]);
        float dem = denominator(all->pokemon[pok]->stat->def_spe);
        float resis = res(all, all->our_pok[our]->attack[i]->type, pok);
        degat -= 245 * ((((nom/dem)+2)*0.85)*resis)/all->pokemon[pok]->stat->pv;
    }
    while (all->pokemon[pok]->size.x > degat && all->pokemon[pok]->size.x > 0) {
        all->dresseur->time = sfClock_getElapsedTime(all->dresseur->cl);
        attack_our_pok_three(all, pok, our);
    }
}

void name_att_pikachu(all *all, int pok, int i)
{
    if (pok == 5)
        att_pikachu(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void name_att(all *all, int pok, int i)
{
    name_att_empoleon(all, pok, i);
    name_att_torterra(all, pok, i);
    name_att_infernape(all, pok, i);
    name_att_garchomp(all, pok, i);
    name_att_arcanine(all, pok, i);
    name_att_pikachu(all, pok, i);
    name_att_staraptor(all, pok, i);
    name_att_milotic(all, pok, i);
    name_att_gliscor(all, pok, i);
}
