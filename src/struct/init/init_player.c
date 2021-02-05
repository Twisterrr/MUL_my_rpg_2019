/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_player
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_dresseur(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->cl = sfClock_create();
    pers->cl2 = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/character_sprite2.png");
    pers->scale.x = 2;
    pers->scale.y = 2;
    pers->position.x = 10;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 150;
    pers->ar.height = 200;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_pers(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->cl = sfClock_create();
    pers->cl2 = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/character_sprite.png");
    pers->scale.x = 2;
    pers->scale.y = 2;
    pers->position.x = 900;
    pers->position.y = 500;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 60;
    pers->ar.height = 60;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}