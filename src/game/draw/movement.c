/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** movement
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void all_movement_directions(all *all, int pos_x, int pos_y, int top)
{
    all->map[all->game->level]->position.x += pos_x;
    all->map[all->game->level]->position.y += pos_y;
    all->pers->ar.top = top;
    all->pers->time = sfClock_getElapsedTime(all->pers->cl);
    if (sfClock_getElapsedTime(all->pers->cl).microseconds >= 1000000/ 3) {
        if (all->pers->ar.left >= 180)
            all->pers->ar.left = 0;
        else
            all->pers->ar.left += 65;
        sfClock_restart(all->pers->cl);
    }
}

int mur(sfFloatRect c, sfFloatRect boundingBox, sfBool intersect)
{
    int ret = 0;
    if (!(intersect))
        return 0;
    if (c.width > c.height)
        if (ABS(boundingBox.top, c.top) <= boundingBox.height / 2)
            ret = 10;
        else
            ret = 20;
    if (c.width < c.height)
        if (ABS(boundingBox.left, c.left) <= boundingBox.width / 2)
            ret += 1;
        else
            ret += 2;
    return ret;
}

void movement_player(all* all, sfFloatRect c, \
    sfFloatRect boundingBox, sfBool intersect)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        movement_north(c, boundingBox, intersect, all);
    else if (sfKeyboard_isKeyPressed(sfKeyDown))
        movement_south(c, boundingBox, intersect, all);
    else if (sfKeyboard_isKeyPressed(sfKeyLeft))
        movement_east(c, boundingBox, intersect, all);
    else if (sfKeyboard_isKeyPressed(sfKeyRight))
        movement_west(c, boundingBox, intersect, all);
    else
        all->pers->ar.left = 0;
    sfSprite_setPosition(all->map[all->game->level]->sprite_f, \
    all->map[all->game->level]->position);
    sfSprite_setPosition(all->pers->sprite_f, all->pers->position);
    sfSprite_setTextureRect(all->pers->sprite_f, all->pers->ar);
}
