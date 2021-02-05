/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pnj
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_prof(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->cl = sfClock_create();
    pers->cl2 = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/prof_chen.png");
    pers->scale.x = 2;
    pers->scale.y = 2;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 60;
    pers->ar.height = 60;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
    return (pers);
}

game_t *init_pnj_one(void)
{
    game_t *pnj = malloc(sizeof(struct s_game));
    pnj->sprite_f = create_sprite("Ressources/game/pnj2.png");
    pnj->scale.x = 2;
    pnj->scale.y = 2;
    pnj->ar.left = 0;
    pnj->ar.top = 0;
    pnj->ar.width = 60;
    pnj->ar.height = 60;
    sfSprite_setScale(pnj->sprite_f, pnj->scale);
    sfSprite_setTextureRect(pnj->sprite_f, pnj->ar);
    return (pnj);
}

game_t *init_pnj_two(void)
{
    game_t *pnj = malloc(sizeof(struct s_game));
    pnj->sprite_f = create_sprite("Ressources/game/pnj3.png");
    pnj->scale.x = 2;
    pnj->scale.y = 2;
    pnj->ar.left = 0;
    pnj->ar.top = 0;
    pnj->ar.width = 50;
    pnj->ar.height = 60;
    sfSprite_setScale(pnj->sprite_f, pnj->scale);
    sfSprite_setTextureRect(pnj->sprite_f, pnj->ar);
    return (pnj);
}

game_t *init_pnj_three(void)
{
    game_t *pnj = malloc(sizeof(struct s_game));
    pnj->sprite_f = create_sprite("Ressources/game/pnj_four.png");
    pnj->scale.x = 2;
    pnj->scale.y = 2;
    pnj->ar.left = 0;
    pnj->ar.top = 0;
    pnj->ar.width = 50;
    pnj->ar.height = 60;
    sfSprite_setScale(pnj->sprite_f, pnj->scale);
    sfSprite_setTextureRect(pnj->sprite_f, pnj->ar);
    return (pnj);
}

game_t *init_pnj_four(void)
{
    game_t *pnj = malloc(sizeof(struct s_game));
    pnj->sprite_f = create_sprite("Ressources/game/damien.png");
    pnj->scale.x = 3;
    pnj->scale.y = 3;
    pnj->ar.left = 0;
    pnj->ar.top = 0;
    pnj->ar.width = 50;
    pnj->ar.height = 60;
    sfSprite_setScale(pnj->sprite_f, pnj->scale);
    sfSprite_setTextureRect(pnj->sprite_f, pnj->ar);
    return (pnj);
}
