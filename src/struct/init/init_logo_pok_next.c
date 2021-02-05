/*
** EPITECH PROJECT, 2020
** logo_pok
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *logo_pok_five(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1200;
    pers->position.y = 295;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *logo_pok_six(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1550;
    pers->position.y = 305;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *init_board_pokeball(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/att_board.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1150;
    pers->position.y = 0;
    pers->ar.left = 0;
    pers->ar.top = 250;
    pers->ar.width = 100;
    pers->ar.height = 200;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_pok_board(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1200;
    pers->position.y = 0;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 1000;
    pers->ar.height = 2000;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *init_inv_c_six(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/inv_pok_board.png");
    pers->scale.x = 1.4;
    pers->scale.y = 1.4;
    pers->position.x = 1550;
    pers->position.y = 268;
    pers->ar.left = 980;
    pers->ar.top = 30;
    pers->ar.width = 500;
    pers->ar.height = 120;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}
