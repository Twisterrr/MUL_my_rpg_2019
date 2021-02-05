/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** dialog_pnj
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void d_text(all *all)
{
    sfRenderWindow_drawSprite(all->w, \
    all->pnj_one->text->sprite, NULL);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
    sfRenderWindow_display(all->w);
}
