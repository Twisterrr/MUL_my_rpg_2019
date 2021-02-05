/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** cursor
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void move_cursor(cursor *cur, sfRenderWindow *w)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
    sfVector2f m;
    m.x = (int) mouse.x;
    m.y = (int) mouse.y;

    sfSprite_setTextureRect(cur->cursor, cur->press);
    sfSprite_setPosition(cur->cursor, m);
    sfRenderWindow_drawSprite(w, cur->cursor, NULL);
}

void draw_cursor(cursor *cur, sfRenderWindow *w)
{
    if (cur->choose == 0) {
        sfVector2i mouse = sfMouse_getPositionRenderWindow(w);
        sfVector2f m;
        m.x = (int) mouse.x - 15;
        m.y = (int) mouse.y;

        sfSprite_setTextureRect(cur->cursor, cur->idle);
        sfSprite_setPosition(cur->cursor, m);
        sfRenderWindow_drawSprite(w, cur->cursor, NULL);
    } else {
        if (sfClock_getElapsedTime(cur->clock).microseconds >= 10000) {
            move_cursor(cur, w);
            cur->choose -= 1;
            sfClock_restart(cur->clock);
        }
    }
}