/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pressed_resolution
*/

#include "../../../../include/rpg.h"
#include "../../../../include/struct.h"

void pressed_res(opt *opt, sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    if ((m.x >= 855 && m.x <= 1255) && (m.y >= 700 && m.y <= 800)) {
        sfRenderWindow_setSize(w, (sfVector2u) {1920, 1080});
        sfSound_play(all->menu->sound_button);
    }
    if ((m.x >= 1355 && m.x <= 1755) && (m.y >= 700 && m.y <= 800)) {
        sfRenderWindow_setSize(w, (sfVector2u) {1600, 900});
        sfSound_play(all->menu->sound_button);
    }
}