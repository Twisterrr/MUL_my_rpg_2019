/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** draw_menu_next
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_menu_next(menu *menu, sfRenderWindow *w, cursor *cur)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, menu->next->fond, NULL);
    draw_button_menu_next(menu, w);
    draw_cursor(cur, w);
}