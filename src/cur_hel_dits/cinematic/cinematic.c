/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** cinematic
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_cinema(all *all, sfRenderWindow *w)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(all->w, all->cinematic->sprite_f, NULL);
    draw_pos_txt(all->cinematic->texxt, w);
    draw_pos_txt(all->cinematic->cine, w);
    draw_pos_txt(all->cinematic->last, w);
}

void event_cinema(all *all, sfRenderWindow *w)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
    sfSleep(sfSeconds(17));
    sfMusic_play(all->map[all->game->level]->music);
    my_game(all);
}

void my_cinema(all *all)
{
    sfRenderWindow_setMouseCursorVisible(all->w, sfFalse);
    while (sfRenderWindow_isOpen(all->w)) {
        draw_cinema(all, all->w);
        sfRenderWindow_display(all->w);
        event_cinema(all, all->w);
    }
}