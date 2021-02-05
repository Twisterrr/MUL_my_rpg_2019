/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_map3
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

lay_above_t *roof2_f(char *name, int x, int y)
{
    lay_above_t *roof1 = malloc(sizeof(lay_above_t));
    roof1->sprite_f = create_sprite(name);
    roof1->scale.x = 6;
    roof1->scale.y = 6;
    roof1->pos.x = x;
    roof1->pos.y = y;
    sfSprite_setScale(roof1->sprite_f, roof1->scale);
    return (roof1);
}

lay_above_t **lay_above2_f(void)
{
    lay_above_t ** la = malloc(sizeof(lay_above_t *) * 4);
    la[0] = roof2_f("Ressources/game/roofmap5-1.png", 747, 1080);
    la[1] = roof2_f("Ressources/game/roofmap5-2.png", 1980, 2400);
    la[2] = roof2_f("Ressources/game/roofmap5-3.png", 2490, 1825);
    la[3] = roof2_f("Ressources/game/roofmap5-4.png", 3636, 1910);
    return la;
}

map_t *map3_init(void)
{
    map_t *map = malloc(sizeof(struct s_map));
    map->sprite_f = create_sprite("Ressources/game/map_five.png");
    map->music = create_music("Ressources/musics/map3.ogg", sfTrue, sfFalse);
    map->scale.x = 4.5;
    map->scale.y = 4.5;
    map->position.x = 0;
    map->position.y = -700;
    map->obstacles = 28;
    map->obstacle = obstacle3_f(map);
    map->obstacle = grass2_f(map);
    map->lay = 4;
    map->lay_above = lay_above2_f();
    sfSprite_setPosition(map->sprite_f, map->position);
    sfSprite_setScale(map->sprite_f, map->scale);
    return map;
}
