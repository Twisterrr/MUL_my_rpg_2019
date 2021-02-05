/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_game
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

bool inter(all *all, sfFloatRect *c)
{
    sfFloatRect bb = sfSprite_getGlobalBounds(all->pers->sprite_f);
    if (all->map[all->game->level]->obstacle != NULL)
        for (int i = 0; i < all->map[all->game->level]->obstacles; i++)
            if (sfFloatRect_intersects(&bb, \
            &all->map[all->game->level]->obstacle[i]->rect, c) && \
            all->map[all->game->level]->obstacle[i]->block)
                return i + 1;
    return 0;
}

void step_lay_above(all *all)
{
    if (all->map[all->game->level]->lay_above != NULL) {
        for (int i = 0; i < 4; i++) {
            sfVector2f pos_roof1 = {
            all->map[all->game->level]->position.x + \
            all->map[all->game->level]->lay_above[i]->pos.x, \
            all->map[all->game->level]->position.y + \
            all->map[all->game->level]->lay_above[i]->pos.y};
            sfSprite_setPosition(all->map \
            [all->game->level]->lay_above[i]->sprite_f, pos_roof1);
            sfRenderWindow_drawSprite(all->w, \
            all->map[all->game->level]->lay_above[i]->sprite_f, NULL);
        }
    }
}

void step_obstacle(map_t *map)
{
    if (map->obstacle != NULL)
        for (int i = 0; i < map->obstacles; i++) {
            map->obstacle[i]->rect.left =
                map->position.x + map->obstacle[i]->pos.x;
            map->obstacle[i]->rect.top =
                map->position.y + map->obstacle[i]->pos.y;
        }
}
