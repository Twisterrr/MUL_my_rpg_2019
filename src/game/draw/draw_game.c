/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** draw_game
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_game_two(all *all, sfRenderWindow *w)
{
    if (all->game->level == 2) {
        sfVector2f pos = {all->map[2]->position.x + 1380, \
        all->map[2]->position.y + 1000};
        sfSprite_setPosition(all->pnj_two->sprite_f, pos);
        sfRenderWindow_drawSprite(w, all->pnj_two->sprite_f, NULL);
        sfVector2f pos2 = {all->map[2]->position.x + 3300, \
        all->map[2]->position.y + 320};
        sfSprite_setPosition(all->pnj_three->sprite_f, pos2);
        sfRenderWindow_drawSprite(w, all->pnj_three->sprite_f, NULL);
        sfVector2f pos3 = {all->map[2]->position.x + 3100, \
        all->map[2]->position.y + 2500};
        sfSprite_setPosition(all->pnj_four->sprite_f, pos3);
        sfRenderWindow_drawSprite(w, all->pnj_four->sprite_f, NULL);
    }
}

void draw_game_one(all *all, sfRenderWindow *w)
{
    if (all->game->level == 0) {
        sfVector2f pos = {all->map[0]->position.x + 1200, \
        all->map[0]->position.y + 250};
        sfSprite_setPosition(all->prof->sprite_f, pos);
        sfRenderWindow_drawSprite(w, all->prof->sprite_f, NULL);
    }
}

void draw_game(all* all, sfRenderWindow *w)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, all->map[all->game->level]->sprite_f, NULL);
    draw_game_one(all, w);
    if (all->game->level == 1) {
        sfVector2f pos = {all->map[1]->position.x + 410, \
        all->map[1]->position.y + 450};
        sfSprite_setPosition(all->pnj_one->sprite_f, pos);
        sfRenderWindow_drawSprite(w, all->pnj_one->sprite_f, NULL);
    }
    draw_game_two(all, w);
    if (all->game->level == 3) {
        sfVector2f pos = {all->map[3]->position.x + 570, \
                        all->map[3]->position.y + 120};
        sfSprite_setPosition(all->damien->sprite_f, pos);
        sfRenderWindow_drawSprite(w, all->damien->sprite_f, NULL);
    }
    sfRenderWindow_drawSprite(w, all->pers->sprite_f, NULL);
}
