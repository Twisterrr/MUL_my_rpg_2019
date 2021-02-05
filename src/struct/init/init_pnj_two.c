/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pnj_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_damien(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->cl = sfClock_create();
    pers->cl2 = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/champion.png");
    pers->scale.x = 2.5;
    pers->scale.y = 2.5;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 60;
    pers->ar.height = 60;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return (pers);
}
