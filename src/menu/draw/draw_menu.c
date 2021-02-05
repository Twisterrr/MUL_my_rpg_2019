/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** draw_menu
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_menu(menu *menu, sfRenderWindow *w, cursor *cur)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, menu->fond, NULL);
    sfRenderWindow_drawSprite(w, menu->title, NULL);
    sfRenderWindow_drawSprite(w, menu->start, NULL);
    draw_cursor(cur, w);
}