/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** credit
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pressed_credits(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    if ((m.x >= 0 && m.x <= 240) && (m.y >= 940 && m.y <= 1020)) {
        sfSound_play(all->menu->sound_button);
        sfSleep(all->time);
        credits(w, all->credit, all);
    }
}

void draw_credits_2(credits_s *c, sfRenderWindow *w)
{
    int red, green, blue;
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if (sfClock_getElapsedTime(c->mov_txt).microseconds > 100000) {
        sfClock_restart(c->mov_txt);
        red = rand();
        green = rand();
        blue = rand();
        sfText_setColor(c->defile->txt, sfColor_fromRGB(red, green, blue));
        c->defile->pos.y -= 2;
    }
}

void draw_credits(sfRenderWindow *w, credits_s *c)
{
    sfVector2i credits = sfMouse_getPositionRenderWindow(w);
    sfVector2f cre, cre_2;
    cre.x = (int) credits.x - 1500;
    cre.y = (int) credits.y - 1500;
    cre_2.x = (int) credits.x + 1500;
    cre_2.y = (int) credits.y - 1500;

    draw_pos_txt(c->defile, w);
    for (int i = 0 ; i != 40 ; i++) {
        cre.x += 100;
        cre.y += 100;
        cre_2.x -= 100;
        cre_2.y += 100;
    }
    draw_credits_2(c, w);
}

void event_credits(sfRenderWindow *w, all *all)
{
    sfEvent e;

    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
    }
}

void credits(sfRenderWindow *w, credits_s *c, all *all)
{
    sfMusic_pause(all->map[3]->music);
    sfMusic_play(c->music);
    c->defile->pos = (sfVector2f) {400, 100};
    while (sfRenderWindow_isOpen(w) && all->back == 0) {
        sfRenderWindow_clear(w, sfBlack);
        draw_credits(w, c);
        event_credits(w, all);
        draw_cursor(all->cursor, w);
        sfRenderWindow_display(w);
    }
}