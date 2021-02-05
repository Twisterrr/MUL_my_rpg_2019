/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** option
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void option(all *all)
{
    while (all->back == 0 && sfRenderWindow_isOpen(all->w)) {
        draw_option(all->option, all->w, all->cursor);
        event_option(all->option, all->w, all);
        sfRenderWindow_display(all->w);
    }
    sfClock_restart(all->menu->wait);
    all->back -= 1;
}