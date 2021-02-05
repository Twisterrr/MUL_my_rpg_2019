/*
** EPITECH PROJECT, 2020
** text
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void event_text(all *all, sfFloatRect c, sfFloatRect bb)
{
    if (all->game->level == 0)
        if (sfFloatRect_intersects(&bb, \
            &all->map[all->game->level]->obstacle[5]->rect, &c)
            && sfKeyboard_isKeyPressed(sfKeyUp))
            while (sfRenderWindow_isOpen(all->w)) {
                if (sfKeyboard_isKeyPressed(sfKeyDown))
                    break;
                draw_game(all, all->w);
                draw_button(all->sign, all->w);
                sfRenderWindow_display(all->w);
            }
}
