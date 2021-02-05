/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pressed_pause
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pressed_resume(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 172 && m.y <= 258))
        all->back = 1;
}

void pressed_menu(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 590 && m.y <= 698))
        all->back = 4;
}

void pressed_option_pause(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 759 && m.y <= 841))
        option(all);
}

void pressed_quit_two(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 900 && m.y <= 1002)) {
        sfRenderWindow_close(w);
    }
}

void pressed_help(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 451 && m.y <= 545))
        help_menu(w, all, all->menu->next->h);
}