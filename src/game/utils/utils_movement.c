/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_movement
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void utils_movment(all *all)
{
    if (all->pers->position.y >= all->game->cord_pers->min_y) {
        all->pers->time2 = sfClock_getElapsedTime(all->pers->cl2);
        if (sfClock_getElapsedTime(all->pers->cl2).microseconds \
            >= 10000/ 3) {
            all->pers->position.y -= 5;
            sfClock_restart(all->pers->cl2);
        }
        all_movement_directions(all, 0, 0, 190);
    }
}

void movement_north(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all)
{
    if (mur(c, boundingBox, intersect) / 10 != 1) {
        if (all->map[all->game->level]->position.y <= \
        all->game->cord_map->max_y  && all->pers->position.y == 500)
            all_movement_directions(all, 0, 5, 190);
        else
            utils_movment(all);
    }
}

void movement_south(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all)
{
    if (mur(c, boundingBox, intersect) / 10 != 2) {
        if (all->map[all->game->level]->position.y >= \
        all->game->cord_map->min_y &&
            all->pers->position.y == 500)
            all_movement_directions(all, 0, -5, 0);
        else {
            if (all->pers->position.y <= all->game->cord_pers->max_y) {
                all->pers->time2 = sfClock_getElapsedTime(all->pers->cl2);
                if (sfClock_getElapsedTime(all->pers->cl2).microseconds \
                >= 10000/ 3) {
                    all->pers->position.y += 5;
                    sfClock_restart(all->pers->cl2);
                }
                all_movement_directions(all, 0, 0, 0);
            }
        }
    }
}

void movement_east(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all)
{
    if (mur(c, boundingBox, intersect) % 10 != 1) {
        if (all->map[all->game->level]->position.x <= \
        all->game->cord_map->max_x && all->pers->position.x
            == 900)
            all_movement_directions(all, 5, 0, 65);
        else {
            if (all->pers->position.x >= all->game->cord_pers->min_x) {
                all->pers->time2 = sfClock_getElapsedTime(all->pers->cl2);
                if (sfClock_getElapsedTime(all->pers->cl2).microseconds \
                    >= 10000/ 3) {
                    all->pers->position.x -= 5;
                    sfClock_restart(all->pers->cl2);
                }
                all_movement_directions(all, 0, 0, 65);
            }
        }
    }
}

void movement_west(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all)
{
    if (mur(c, boundingBox, intersect) % 10 != 2) {
        if (all->map[all->game->level]->position.x >= \
        all->game->cord_map->min_x &&
            all->pers->position.x == 900)
            all_movement_directions(all, -5, 0, 130);
        else {
            if (all->pers->position.x <= all->game->cord_pers->max_x) {
                all->pers->time2 = sfClock_getElapsedTime(all->pers->cl2);
                if (sfClock_getElapsedTime(all->pers->cl2).microseconds \
                >= 10000/ 3) {
                    all->pers->position.x += 5;
                    sfClock_restart(all->pers->cl2);
                }
                all_movement_directions(all, 0, 0, 130);
            }
        }
    }
}
