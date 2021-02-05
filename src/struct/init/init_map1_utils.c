/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_map1_utils
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

obstacle_t *obstacle_init(int x0, int y0, int x1, int y1)
{
    obstacle_t *house2 = malloc(sizeof(obstacle_t));
    house2->rect.width = x0;
    house2->rect.height = y0;
    house2->pos.x = x1;
    house2->pos.y = y1;

    return house2;
}

obstacle_t **obstacle_f(map_t *map)
{
    map->obstacle = malloc(sizeof(obstacle_t *) * map->obstacles);
    map->obstacle[0] = obstacle_init(300, 250, 690, 1020);
    map->obstacle[1] = obstacle_init(440, 240, 1450, 990);
    map->obstacle[2] = obstacle_init(440, 240, 590, 378);
    map->obstacle[3] = obstacle_init(300, 250, 1500, 410);
    map->obstacle[4] = obstacle_init(50, 40, 1250, 790);
    map->obstacle[5] = obstacle_init(20, 10, 1270, 850);
    map->obstacle[6] = obstacle_init(300, 10, 1100, 20);
    map->obstacle[7] = obstacle_init(50, 50, 1230, 275);
    map->obstacle[8] = obstacle_init(10, 10, 1250, 330);
    map->obstacle[9] = obstacle_init(400, 200, 470, 0);
    map->obstacle[10] = obstacle_init(400, 200, 1600, 0);
    return map->obstacle;
}

obstacle_t **grass0_f(map_t *map)
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
    map->obstacle[10]->block = 1;
    return map->obstacle;
}