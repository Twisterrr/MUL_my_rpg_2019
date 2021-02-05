/*
** EPITECH PROJECT, 2019
** duck_hunt
** File description:
** create_sprite
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

sfSprite *create_sprite(char *texture)
{
    sfSprite *s;
    sfTexture *t = sfTexture_createFromFile(texture, NULL);

    s = sfSprite_create();
    sfSprite_setTexture(s, t, sfTrue);
    return (s);
}
