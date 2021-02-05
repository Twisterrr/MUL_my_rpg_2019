/*
** EPITECH PROJECT, 2020
** inventaire
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_inv_c_one(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1200;
    pers->position.y = 5;
    pers->ar.left = 980;
    pers->ar.top = 180;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_c_two(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1550;
    pers->position.y = 3;
    pers->ar.left = 980;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_c_three(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1200;
    pers->position.y = 110;
    pers->ar.left = 980;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_c_four(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1550;
    pers->position.y = 135;
    pers->ar.left = 980;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_c_five(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1200;
    pers->position.y = 245;
    pers->ar.left = 980;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}
