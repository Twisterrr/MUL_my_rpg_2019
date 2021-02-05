/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_menu_next
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void event_menu_next_two(menu *menu, sfRenderWindow *w, all *all, sfVector2i m)
{
    if ((m.x >= 730 && m.x <= 1130) && (m.y >= 500 && m.y <= 600)) {
        sfSound_play(all->menu->sound_button);
        sfRenderWindow_close(w);
    }
    if ((m.x >= 730 && m.x <= 1130) && (m.y >= 700 && m.y <= 800)) {
        sfSound_play(all->menu->sound_button);
        option(all);
    }
    if ((m.x >= 1806 && m.x <= 1863) && (m.y >= 84 && m.y <= 154)) {
        sfSound_play(all->menu->sound_button);
        help_menu(w, all, menu->next->h);
    }
}

void event_menu_next(menu *menu, sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    sfEvent e;
    all->game = malloc(sizeof(struct level_s));
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (e.type == sfEvtMouseButtonPressed) {
            all->cursor->choose = 10;
            if ((m.x >= 730 && m.x <= 1130) && (m.y >= 300 && m.y <= 400)) {
                all->game->level = 0;
                sfSound_play(all->menu->sound_button);
                my_cinema(all);
            }
            event_menu_next_two(menu, w, all, m);
        }
    }
}