/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** draw_button
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_button_menu(menu *menu, sfRenderWindow *w)
{
    draw_button(menu->play, w);
}

void draw_button_menu_next(menu *menu, sfRenderWindow *w)
{
    sfRenderWindow_drawSprite(w, menu->next->help, NULL);
    hover_menu(menu, w);
    draw_button(menu->next->play, w);
    draw_button(menu->next->quit, w);
    draw_button(menu->next->option, w);
}