/*
** EPITECH PROJECT, 2020
** pers
** File description:
** rpg
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

sfFloatRect pers_rect(all *all)
{
    sfFloatRect boundingBox = sfSprite_getGlobalBounds(all->pers->sprite_f);
    sfVector2f v = {boundingBox.width, boundingBox.height};
    return boundingBox;
}

void move_dresseur(all *all)
{
    all->dresseur->time = sfClock_getElapsedTime(all->dresseur->cl);
    if (sfClock_getElapsedTime(all->dresseur->cl).microseconds >= 500000/ 3) {
        if (all->dresseur->ar.left >= 720)
            return;
        else
            all->dresseur->ar.left += 180;
        sfClock_restart(all->dresseur->cl);
    }
    sfSprite_setTextureRect(all->dresseur->sprite_f, all->dresseur->ar);
}

void pok_dresseur(all *all, int i)
{
    if (!(all->dresseur->ar.left >= 820))
        sfRenderWindow_drawSprite(all->w, all->dresseur->sprite_f, NULL);
    if (i)
        move_dresseur(all);
}
