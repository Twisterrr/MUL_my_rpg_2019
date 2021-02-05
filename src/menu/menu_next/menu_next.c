/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** menu_next
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void my_menu_next(all *all)
{
    sfRenderWindow_setFramerateLimit(all->w, all->frame_limit);
    sfRenderWindow_setMouseCursorVisible(all->w, sfFalse);
    while (sfRenderWindow_isOpen(all->w)) {
        draw_menu_next(all->menu, all->w, all->cursor);
        event_menu_next(all->menu, all->w, all);
        sfRenderWindow_display(all->w);
    }
}