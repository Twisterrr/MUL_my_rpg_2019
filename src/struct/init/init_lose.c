/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_lose
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_lose(void)
{
    game_t *lose = malloc(sizeof(*lose));
    lose->sprite_f = create_sprite("Ressources/game/gameover.png");
    sfSprite_scale(lose->sprite_f, (sfVector2f) {1.8, 1.8});
    return (lose);
}