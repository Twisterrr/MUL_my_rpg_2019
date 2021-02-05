/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_map4
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

obstacle_t **obstacle_a_f(map_t *map)
{
    map->obstacle = malloc(sizeof(obstacle_t *) * map->obstacles);
    map->obstacle[0] = obstacle_init(50, 50, 600, 200);
    map->obstacle[0]->block = 1;
    return map->obstacle;
}

map_t *map4_init(void)
{
    map_t *map = malloc(sizeof(struct s_map));
    map->sprite_f = create_sprite("Ressources/game/arene.png");
    map->music = create_music("Ressources/musics/arene.ogg", sfTrue, sfFalse);
    map->scale.x = 5;
    map->scale.y = 5;
    map->position.x = 300;
    map->position.y = 150;
    map->obstacles = 1;
    sfSprite_setPosition(map->sprite_f, map->position);
    sfSprite_setScale(map->sprite_f, map->scale);
    map->lay_above = NULL;
    map->obstacle = obstacle_a_f(map);
    return map;
}