/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** attack_pokemon_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void name_att_empoleon(all *all, int pok, int i)
{
    if (pok == 1)
        att_empoleon(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void name_att_infernape(all *all, int pok, int i)
{
    if (pok == 2)
        att_infernape(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void name_att_torterra(all *all, int pok, int i)
{
    if (pok == 0)
        att_torterra(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void name_att_garchomp(all *all, int pok, int i)
{
    if (pok == 3)
        att_garchomp(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void name_att_arcanine(all *all, int pok, int i)
{
    if (pok == 4)
        att_arcanine(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}
