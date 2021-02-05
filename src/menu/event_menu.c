/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_menu
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

void event_menu(menu *menu, sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (e.type == sfEvtMouseButtonPressed) {
            all->cursor->choose = 10;
            if ((m.x >= 801 && m.x <= 1025) && (m.y >= 665 && m.y <= 739)) {
                sfSound_play(all->menu->sound_button);
                my_menu_next(all);
                sfSleep(all->time);
            }
        }
    }
}
