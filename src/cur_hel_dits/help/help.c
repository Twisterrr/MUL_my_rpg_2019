/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** help
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void event_help_two(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 100 && m.x <= 470) && m.y >= 300 && m.y <= 400)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            help_character(all);
    if ((m.x >= 100 && m.x <= 470) && m.y >= 500 && m.y <= 600)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            help_fight(all);
    if ((m.x >= 100 && m.x <= 470) && m.y >= 700 && m.y <= 800)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            help_map(all);
}

void event_help(sfRenderWindow *w, all *all, cursor *cur)
{
    sfEvent e;

    while (sfRenderWindow_pollEvent(all->w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(all->w);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            all->back = 1;
        if (e.type == sfEvtMouseButtonPressed) {
            cur->choose = 10;
            sfVector2i m = sfMouse_getPositionRenderWindow(w);
            if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1000))
                all->back = 1;
        }
    }
    event_help_two(all);
}

void help_menu(sfRenderWindow *w, all *all, help *help)
{
    while (sfRenderWindow_isOpen(w) && all->back == 0) {
        sfRenderWindow_clear(w, sfBlack);
        draw_help(w, help, all->cursor);
        event_help(w, all, all->cursor);
        sfRenderWindow_display(w);
    }
    all->back -= 1;
    sfClock_restart(all->menu->wait);
}
