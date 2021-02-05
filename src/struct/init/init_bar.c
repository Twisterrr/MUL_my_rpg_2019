/*
** EPITECH PROJECT, 2020
** bar
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_inv_bar_one(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1420;
    pers->position.y = 0;
    pers->ar.left = 550;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_bar_two(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1060;
    pers->position.y = 110;
    pers->ar.left = 550;
    pers->ar.top = 30;
    pers->ar.width = 410;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_bar_three(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1420;
    pers->position.y = 135;
    pers->ar.left = 550;
    pers->ar.top = 30;
    pers->ar.width = 410;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_bar_four(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1060;
    pers->position.y = 245;
    pers->ar.left = 550;
    pers->ar.top = 30;
    pers->ar.width = 410;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_bar_five(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1420;
    pers->position.y = 270;
    pers->ar.left = 550;
    pers->ar.top = 30;
    pers->ar.width = 410;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}
