/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pressed_frame
*/

#include "../../../../include/rpg.h"
#include "../../../../include/struct.h"

void pressed_frame(opt *opt, sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);
    char *str = malloc(sizeof(char) * (10));
    if ((m.x >= 855 && m.x <= 1255) && (m.y >= 255 && m.y <= 355)) {
        all->frame_limit += 2;
        sfText_setString(opt->int_frame_limit->txt, \
        int_to_str(all->frame_limit, str));
        sfSound_play(all->menu->sound_button);
        sfRenderWindow_setFramerateLimit(w, all->frame_limit);
    }
    if ((m.x >= 1355 && m.x <= 1755) && (m.y >= 255 && m.y <= 355)) {
        if (all->frame_limit != 2)
            all->frame_limit -= 2;
        sfText_setString(opt->int_frame_limit->txt, \
        int_to_str(all->frame_limit, str));
        sfSound_play(all->menu->sound_button);
        sfRenderWindow_setFramerateLimit(w, all->frame_limit);
    }
    free (str);
}