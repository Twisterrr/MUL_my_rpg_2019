/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pv_pok_move
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void our_pok_move(all *all, int our)
{
    our_infernape(all, our);
    our_empoleon(all, our);
    our_torterra(all, our);
    our_garchomp(all, our);
    our_arcanine(all, our);
    our_pikachu(all, our);
    our_staraptor(all, our);
    our_milotic(all, our);
    our_gliscor(all, our);
    sfSprite_setTextureRect(all->our_pok[our]->sprite_f, all->our_pok[our]->ar);
}

void color_pv(pokemon_t *pok)
{
    if (pok->size.x <= 123)
        sfRectangleShape_setFillColor(pok->rect, sfYellow);
    if (pok->size.x <= 62)
        sfRectangleShape_setFillColor(pok->rect, sfRed);
}

void draw_pv(all *all, int pok, int our)
{
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRectangleShape_setSize(all->our_pok[our]->rect, all->our_pok[our]->size);
    sfRectangleShape_setSize(all->pokemon[pok]->rect, all->pokemon[pok]->size);
    sfRenderWindow_drawRectangleShape(all->w, all->pokemon[pok]->rect, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->our_pok[our]->rect, NULL);
    sfRenderWindow_display(all->w);
}

int our_fast(all *all, int pok, int our, int a)
{
    int i = rand() % 4;
    attack_our_pok(all, pok, our, a);
    if (all->pokemon[pok]->size.x <= 0)
        return 1;
    draw_pv(all, pok, our);
    wait_opponent(all, pok, our, i);
    attack_opponent(all, pok, our, i);
    color_pv(all->our_pok[our]);
    if (all->our_pok[our]->size.x <= 0)
        return 2;
    return 0;
}

int pok_fast(all *all, int pok, int our, int a)
{
    int i = rand() % 4;
    wait_opponent(all, pok, our, i);
    attack_opponent(all, pok, our, i);
    if (all->our_pok[our]->size.x <= 0)
        return 2;
    attack_our_pok(all, pok, our, a);
    if (all->pokemon[pok]->size.x <= 0)
        return 1;
    return 0;
}
