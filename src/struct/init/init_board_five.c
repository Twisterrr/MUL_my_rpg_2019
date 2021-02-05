/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_board_five
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

sfVector2f init_board_ice_next(game_t *pers, int i)
{
    if (i == 1) {
        pers->position.x = 1130;
        pers->position.y = 50;
    }
    if (i == 2) {
        pers->position.x = 1500;
        pers->position.y = 50;
    }
    if (i == 3) {
        pers->position.x = 1138;
        pers->position.y = 215;
    }
    return (pers->position);
}

game_t *init_board_ice(int i)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/att_board.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position = init_board_ice_next(pers, i);
    pers->ar.left = 265;
    pers->ar.top = 695;
    pers->ar.width = 210;
    pers->ar.height = 55;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

sfVector2f init_board_dragon_next(game_t *pers, int i)
{
    if (i == 1) {
        pers->position.x = 1130;
        pers->position.y = 50;
    }
    if (i == 2) {
        pers->position.x = 1505;
        pers->position.y = 50;
    }
    if (i == 3) {
        pers->position.x = 1138;
        pers->position.y = 215;
    }
    return (pers->position);
}

game_t *init_board_dragon(int i)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/att_board.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position = init_board_dragon_next(pers, i);
    pers->ar.left = 265;
    pers->ar.top = 640;
    pers->ar.width = 210;
    pers->ar.height = 55;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}
