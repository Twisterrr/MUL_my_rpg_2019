/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

bool inter_grass(all *all, sfFloatRect *c)
{
    sfFloatRect bb = sfSprite_getGlobalBounds(all->pers->sprite_f);
    if (all->map[all->game->level]->obstacle != NULL)
        for (int i = 0; i < all->map[all->game->level]->obstacles; i++)
            if (sfFloatRect_intersects(&bb, \
            &all->map[all->game->level]->obstacle[i]->rect, c) && \
            !(all->map[all->game->level]->obstacle[i]->block))
                return i + 1;
    return 0;
}

void close_game(all *all)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(all->w, &e))
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(all->w);
}

void my_game_three(all* all, sfBool intersect, \
sfFloatRect c, sfFloatRect boundingBox)
{
    event_game(all, intersect, c, boundingBox);
    sfRenderWindow_display(all->w);
}

void my_game_two(all *all)
{
    draw_game(all, all->w);
    step_lay_above(all);
    step_obstacle(all->map[all->game->level]);
    all->game = level_f(all->game);
}

void my_game(all *all)
{
    sfFloatRect c;
    sfMusic_pause(all->menu->music);
    sfRenderWindow_setFramerateLimit(all->w, all->frame_limit);
    sfBool intersect;
    while (sfRenderWindow_isOpen(all->w)) {
        my_game_two(all);
        sfFloatRect boundingBox = pers_rect(all);
        sfFloatRect bb = sfSprite_getGlobalBounds(all->pers->sprite_f);
        if (inter_grass(all, &c)) {
            all->our_pok[0]->time = sfClock_getElapsedTime(all->our_pok[0]->cl);
            if (sfClock_getElapsedTime(all->our_pok[0]->cl).microseconds \
            >= 4000000/ 3) {
                fight_f(all, -1);
                sfClock_restart(all->our_pok[0]->cl);
            }
        }
        map1e(all, bb, c);
        intersect = inter(all, &c);
        my_game_three(all, intersect, c, boundingBox);
    }
}
