/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_map2_utils
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

level_t *level_1f(level_t *level)
{
    if (level->level == 1) {
        level->cord_map->max_x = 0;
        level->cord_map->min_x = -3550;
        level->cord_map->max_y = 0;
        level->cord_map->min_y = -600;
        level->cord_pers->max_x = 1800;
        level->cord_pers->min_x = 250;
        level->cord_pers->max_y = 905;
        level->cord_pers->min_y = 200;
    }
    return level;
}

level_t *level_2f(level_t *level)
{
    if (level->level == 2) {
        level->cord_map->max_x = 0;
        level->cord_map->min_x = -2800;
        level->cord_map->max_y = 0;
        level->cord_map->min_y = -2400;
        level->cord_pers->max_x = 1800;
        level->cord_pers->min_x = 0;
        level->cord_pers->max_y = 755;
        level->cord_pers->min_y = 200;
    }
    return level;
}

level_t *level_3f(level_t *level)
{
    if (level->level == 3) {
        level->cord_map->max_x = 300;
        level->cord_map->min_x = 0;
        level->cord_map->max_y = 100;
        level->cord_map->min_y = 0;
        level->cord_pers->max_x = 1000;
        level->cord_pers->min_x = 500;
        level->cord_pers->max_y = 900;
        level->cord_pers->min_y = 0;
    }
    return level;
}

level_t *level_f(level_t *level)
{
    level->cord_map = malloc(sizeof(struct cord_s));
    level->cord_pers = malloc(sizeof(struct cord_s));
    if (level->level == 0) {
        level->cord_map->max_x = 0;
        level->cord_map->min_x = -550;
        level->cord_map->max_y = 0;
        level->cord_map->min_y = -800;
        level->cord_pers->max_x = 1400;
        level->cord_pers->min_x = 450;
        level->cord_pers->max_y = 700;
        level->cord_pers->min_y = 20;
    }
    level = level_1f(level);
    level = level_2f(level);
    level = level_3f(level);
    return level;
}
