/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** win
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_win(all *all, sfRenderWindow *w)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(all->w, all->win->sprite_f, NULL);
    draw_pos_txt(all->win->texxt, w);
    draw_cursor(all->cursor, w);
}

void event_win(all *all, sfRenderWindow *w)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (e.type == sfEvtMouseButtonPressed) {
            all->cursor->choose = 10;
            pressed_credits(w, all);
        }
    }
}

void my_win(all *all)
{
    while (sfRenderWindow_isOpen(all->w)) {
        draw_win(all, all->w);
        event_win(all, all->w);
        sfRenderWindow_display(all->w);
    }
}