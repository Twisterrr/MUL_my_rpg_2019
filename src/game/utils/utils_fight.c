/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_fight
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int fight_pokemon(all *all, int pok, int our, int a)
{
    if (all->our_pok[our]->stat->vit >= all->pokemon[pok]->stat->vit)
        return our_fast(all, pok, our, a);
    else
        return pok_fast(all, pok, our, a);
    return 0;
}

int mouse_att_two(all *all, sfVector2i m)
{
    if ((m.x >= 1100 && m.x <= 1470) && m.y >= 210 && m.y <= 340)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 2;
    if ((m.x >= 1500 && m.x <= 1870) && m.y >= 210 && m.y <= 340)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 3;
    return -1;
}

int mouse_att(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1100 && m.x <= 1470) && m.y >= 50 && m.y <= 190)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 0;
    if ((m.x >= 1500 && m.x <= 1870) && m.y >= 50 && m.y <= 190)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    int ret = mouse_att_two(all, m);
    if (ret > 0) return ret;
    return -1;
}

void attack_our_pok_four(all *all, int pok, int our)
{
    sfRenderWindow_drawRectangleShape(all->w, all->pokemon[pok]->rect, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->our_pok[our]->rect, NULL);
    sfRenderWindow_drawSprite(all->w, all->pokemon[pok]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->our_pok[our]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    name_wild_pok(all, pok);
    name_our_pok(all, our);
    what_att_for_our_pok(all, our);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
    sfRenderWindow_display(all->w);
}
