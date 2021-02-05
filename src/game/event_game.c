/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_game
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void event_game(all *all, sfBool intersect, sfFloatRect c, \
sfFloatRect boundingBox)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(all->w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(all->w);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
            draw_pause(all->w, all);
    movement_player(all, c, boundingBox, intersect);
}

void text_quit(all *all, sfEvent e)
{
    while (sfRenderWindow_pollEvent(all->w, &e))
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(all->w);
}
