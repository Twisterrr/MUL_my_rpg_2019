/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_map3_utils
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

void obstacle3_f_next(map_t *map)
{
    map->obstacle[13] = obstacle_init(2000, 500, 0, 0);
    map->obstacle[14] = obstacle_init(650, 600, 0, 500);
    map->obstacle[15] = obstacle_init(400, 50, 3100, 320);
    map->obstacle[16] = obstacle_init(50, 50, 3140, 2550);
    map->obstacle[17] = obstacle_init(1500, 300, 3550, 1400);
    map->obstacle[18] = obstacle_init(1500, 2000, 4200, 1400);
    map->obstacle[19] = obstacle_init(1500, 2000, 3800, 2600);
    map->obstacle[20] = obstacle_init(1500, 1200, 3550, 0);
    map->obstacle[21] = obstacle_init(600, 800, 2380, 0);
    map->obstacle[22] = obstacle_init(2100, 350, 1000, 0);
    map->obstacle[23] = obstacle_init(700, 800, 800, 0);
    map->obstacle[24] = obstacle_init(300, 1050, 1700, 0);
    map->obstacle[25] = obstacle_init(460, 10, 500, 1050);
    map->obstacle[26] = obstacle_init(400, 10, 1500, 1050);
    map->obstacle[27] = obstacle_init(30, 10, 1560, 2350);
}

obstacle_t **obstacle3_f(map_t *map)
{
    map->obstacle = malloc(sizeof(obstacle_t *) * map->obstacles);
    map->obstacle[0] = obstacle_init(10, 200, 50, 1200);
    map->obstacle[1] = obstacle_init(3200, 200, 0, 1400);
    map->obstacle[2] = obstacle_init(2500, 600, 0, 1700);
    map->obstacle[3] = obstacle_init(650, 300, 2500, 2000);
    map->obstacle[4] = obstacle_init(1200, 800, 0, 2100);
    map->obstacle[5] = obstacle_init(200, 140, 1200, 2700);
    map->obstacle[6] = obstacle_init(200, 140, 1650, 2700);
    map->obstacle[7] = obstacle_init(1000, 1000, 2000, 2700);
    map->obstacle[8] = obstacle_init(700, 1000, 0, 2900);
    map->obstacle[9] = obstacle_init(2000, 200, 3550, 1998);
    map->obstacle[10] = obstacle_init(20, 10, 3790, 2200);
    map->obstacle[11] = obstacle_init(20, 10, 3790, 2200);
    map->obstacle[12] = obstacle_init(50, 60, 1420, 1000);
    obstacle3_f_next(map);
    return map->obstacle;
}

void grass2_f_next(map_t *map)
{
    map->obstacle[13]->block = 1;
    map->obstacle[14]->block = 1;
    map->obstacle[15]->block = 1;
    map->obstacle[16]->block = 1;
    map->obstacle[17]->block = 1;
    map->obstacle[18]->block = 1;
    map->obstacle[19]->block = 1;
    map->obstacle[20]->block = 1;
    map->obstacle[21]->block = 1;
    map->obstacle[22]->block = 1;
    map->obstacle[23]->block = 1;
    map->obstacle[24]->block = 1;
    map->obstacle[25]->block = 1;
    map->obstacle[26]->block = 1;
    map->obstacle[27]->block = 1;
}

obstacle_t **grass2_f(map_t *map)
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
    map->obstacle[11]->block = 1;
    map->obstacle[12]->block = 1;
    grass2_f_next(map);
    return map->obstacle;
}