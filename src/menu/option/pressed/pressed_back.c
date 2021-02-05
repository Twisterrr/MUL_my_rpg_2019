/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pressed_back
*/

#include "../../../../include/rpg.h"
#include "../../../../include/struct.h"

void pressed_back(opt *opt, sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1000)) {
        sfSound_play(all->menu->sound_button);
        sfSleep(all->time);
        all->back = 1;
    }
}