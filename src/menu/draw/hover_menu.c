/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** hover_menu
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void hover_one(button *but, int one, int two)
{
    but->rect.left = but->rect.width + one;
    but->pos.y = two;
}

void hover_two(button *but, int one, int two)
{
    but->rect.left = one;
    but->pos.y = two;
}

void hover_menu(menu *menu, sfRenderWindow *w)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    if ((m.x >= 730 && m.x <= 1130) && (m.y >= 300 && m.y <= 400)) {
        hover_one(menu->next->play, 370, 310);
    } else
        hover_two(menu->next->play, 370, 300);
    if ((m.x >= 730 && m.x <= 1130) && (m.y >= 500 && m.y <= 600)) {
        hover_one(menu->next->quit, 370, 510);
    } else
        hover_two(menu->next->quit, 370, 500);
    if ((m.x >= 730 && m.x <= 1130) && (m.y >= 700 && m.y <= 800)) {
        hover_one(menu->next->option, 370, 710);
    } else
        hover_two(menu->next->option, 370, 700);
}