/*
** EPITECH PROJECT, 2020
** map2
** File description:
** rpg
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

void obstacle2_f_next(map_t *map)
{
    map->obstacle[10] = obstacle_init(100, 100, 1050, 800);
    map->obstacle[11] = obstacle_init(100, 100, 1450, 600);
    map->obstacle[12] = obstacle_init(600, 300, 2780, 900);
    map->obstacle[13] = obstacle_init(130, 90, 410, 450);
    map->obstacle[14] = obstacle_init(10, 10, 380, 480);
    map->obstacle[15] = obstacle_init(600, 600, 4200, 280);
    map->obstacle[16] = obstacle_init(2000, 600, 4400, 1380);
    map->obstacle[17] = obstacle_init(1100, 1000, 4350, 1270);
    map->obstacle[18] = obstacle_init(100, 100, 3510, 440);
    map->obstacle[19] = obstacle_init(100, 100, 3150, 440);
    map->obstacle[20] = obstacle_init(240, 100, 1690, 440);
    map->obstacle[21] = obstacle_init(240, 100, 1690, 840);
    map->obstacle[22] = obstacle_init(240, 100, 2100, 650);
    map->obstacle[23] = obstacle_init(350, 90, 2600, 450);
    map->obstacle[24] = obstacle_init(200, 90, 3800, 450);
}

obstacle_t **obstacle2_f(map_t *map)
{
    map->obstacle = malloc(sizeof(obstacle_t *) * map->obstacles);
    map->obstacle[0] = obstacle_init(300, 300, 2300, 1550);
    map->obstacle[1] = obstacle_init(2300, 1000, 20, 1100);
    map->obstacle[2] = obstacle_init(10, 200, 5400, 280);
    map->obstacle[3] = obstacle_init(750, 1000, 2600, 1100);
    map->obstacle[4] = obstacle_init(1100, 1000, 3350, 1250);
    map->obstacle[5] = obstacle_init(1000, 1000, 5200, 600);
    map->obstacle[6] = obstacle_init(100, 350, 4750, 450);
    map->obstacle[7] = obstacle_init(3600, 400, 550, 40);
    map->obstacle[8] = obstacle_init(370, 400, 0, 40);
    map->obstacle[9] = obstacle_init(200, 100, 1050, 500);
    obstacle2_f_next(map);
    return map->obstacle;
}

void grass_f_next(map_t *map)
{
    map->obstacle[10]->block = 1;
    map->obstacle[11]->block = 1;
    map->obstacle[12]->block = 0;
    map->obstacle[13]->block = 1;
    map->obstacle[14]->block = 1;
    map->obstacle[15]->block = 0;
    map->obstacle[16]->block = 1;
    map->obstacle[17]->block = 0;
    map->obstacle[18]->block = 1;
    map->obstacle[19]->block = 1;
    map->obstacle[20]->block = 1;
    map->obstacle[21]->block = 1;
    map->obstacle[22]->block = 1;
    map->obstacle[23]->block = 1;
    map->obstacle[24]->block = 1;
}

obstacle_t **grass_f(map_t *map)
{
    map->obstacle[0]->block = 1;
    map->obstacle[1]->block = 1;
    map->obstacle[2]->block = 1;
    map->obstacle[3]->block = 1;
    map->obstacle[4]->block = 1;
    map->obstacle[5]->block = 1;
    map->obstacle[6]->block = 1;
    map->obstacle[7]->block = 1;
    map->obstacle[8]->block = 1;
    map->obstacle[9]->block = 1;
    grass_f_next(map);
    return map->obstacle;
}

map_t *map2_init(void)
{
    map_t *map = malloc(sizeof(struct s_map));
    map->sprite_f = create_sprite("Ressources/game/map_two.png");
    map->music = create_music("Ressources/musics/map2.ogg", sfTrue, sfFalse);
    map->scale.x = 7;
    map->scale.y = 7;
    map->position.x = -1500;
    map->position.y = -650;
    map->obstacles = 25;
    map->obstacle = obstacle2_f(map);
    map->obstacle = grass_f(map);
    map->lay = 0;
    map->lay_above = NULL;
    sfSprite_setPosition(map->sprite_f, map->position);
    sfSprite_setScale(map->sprite_f, map->scale);
    return map;
}