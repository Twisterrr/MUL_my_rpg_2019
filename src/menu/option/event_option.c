/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_option
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void event_option(opt *opt, sfRenderWindow *w, all *all)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (e.type == sfEvtMouseButtonPressed) {
            all->cursor->choose = 10;
            pressed_res(opt, w, all);
            pressed_back(opt, w, all);
            pressed_frame(opt, w, all);
            pressed_sound(opt, w, all);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            all->back = 1;
    }
}