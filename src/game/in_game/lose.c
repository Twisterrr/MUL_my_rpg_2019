/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** lose
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_lose(all *all, sfRenderWindow *w)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(all->w, all->lose->sprite_f, NULL);
}

int event_lose(all *all, sfRenderWindow *w)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
    sfSleep(sfSeconds(8));
    return (1);
}

void my_lose(all *all)
{
    sfRenderWindow_setMouseCursorVisible(all->w, sfFalse);
    while (sfRenderWindow_isOpen(all->w)) {
        draw_lose(all, all->w);
        sfRenderWindow_display(all->w);
        if (event_lose(all, all->w)) break;
    }
}