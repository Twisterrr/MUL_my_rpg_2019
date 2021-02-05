/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_map1
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void arene(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (sfFloatRect_intersects(&bb, \
        &all->map[2]->obstacle[27]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeyUp) && all->grade == 4) {
        all->pers->position.y = 800;
        sfMusic_pause(all->map[all->game->level]->music);
        all->game->level = 3;
        sfMusic_play(all->map[all->game->level]->music);
    }
}

void map1e(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (all->game->level == 0) {
        change_map(all, bb, c);
        speak_prof(all, bb, c);
        event_text(all, c, bb);
    }
    if (all->game->level == 1) {
        change_map1(all, bb, c);
        change_map3(all, bb, c);
        speak_pnj_one(all, bb, c);
    }
    if (all->game->level == 2) {
        change_map4(all, bb, c);
        arene(all, bb, c);
        speak_pnj_two(all, bb, c, all->grade);
        speak_pnj_three(all, bb, c, all->grade);
        speak_pnj_four(all, bb, c, all->grade);
    }
    if (all->game->level == 3)
        speak_pnj_d(all, bb, c, all->grade);
}

void change_map(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[6]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeyUp) && all->pok != -1) {
        all->pers->position.y = 800;
        sfMusic_pause(all->map[all->game->level]->music);
        all->game->level = 1;
        sfMusic_play(all->map[all->game->level]->music);
    }
}
