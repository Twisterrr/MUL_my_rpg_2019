/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_game
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_pokeball(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/pokeball.png");
    pers->scale.x = 0.33;
    pers->scale.y = 0.32;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *starter_f(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/starter.png");
    pers->scale.x = 0.85;
    pers->scale.y = 0.71;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *init_fight(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->cl = sfClock_create();
    pers->cl2 = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/fieldfight.png");
    pers->scale.x = 3;
    pers->scale.y = 3;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *init_bar(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/game/bar.png");
    pers->position.x = 650;
    pers->position.y = 500;
    pers->scale.x = 2.3;
    pers->scale.y = 2.3;
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}
