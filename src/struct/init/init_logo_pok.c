/*
** EPITECH PROJECT, 2020
** logo_pok
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_inv_pok(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/att_board.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1610;
    pers->position.y = 0;
    pers->ar.left = 200;
    pers->ar.top = 250;
    pers->ar.width = 100;
    pers->ar.height = 200;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return pers;
}

game_t *logo_pok(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1200;
    pers->position.y = 45;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *logo_pok_two(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1550;
    pers->position.y = 55;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *logo_pok_three(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1200;
    pers->position.y = 160;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *logo_pok_four(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/icon_pok.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    pers->position.x = 1550;
    pers->position.y = 170;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}
