/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** oponent
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void wait_opponent_two(all *all, int pok, int our)
{
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board1[all->our_pok[our]->board1]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board2[all->our_pok[our]->board2]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board3[all->our_pok[our]->board3]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board4[all->our_pok[our]->board4]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRenderWindow_drawRectangleShape(all->w, \
    all->pokemon[pok]->rect, NULL);
    sfRenderWindow_drawRectangleShape(all->w, \
    all->our_pok[our]->rect, NULL);
    wait_opponent_three(all, pok, our);
}

void wait_opponent(all *all, int pok, int our, int i)
{
    while (1) {
        sfRenderWindow_clear(all->w, sfWhite);
        sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
        oponent(all, pok);
        our_pok_move(all, our);
        color_pv(all->pokemon[pok]);
        if (i > -1)
            name_att(all, pok, i);
        wait_opponent_two(all, pok, our);
        sfRenderWindow_display(all->w);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) break;
    }
}

void attack_opponent_three(all *all, int pok, int our)
{
    sfRenderWindow_drawSprite(all->w, all->pokemon[pok]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->our_pok[our]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
    name_wild_pok(all, pok);
    name_our_pok(all, our);
    what_att_for_our_pok(all, our);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
    sfRenderWindow_display(all->w);
}

void attack_opponent_two(all *all, int pok, int our)
{
    color_pv(all->our_pok[our]);
    sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
    sfRectangleShape_setSize(all->our_pok[our]->rect, \
    all->our_pok[our]->size);
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board1[all->our_pok[our]->board1]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board2[all->our_pok[our]->board2]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board3[all->our_pok[our]->board3]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board4[all->our_pok[our]->board4]->sprite_f, NULL);
    sfRenderWindow_drawRectangleShape(all->w, \
    all->pokemon[pok]->rect, NULL);
    sfRenderWindow_drawRectangleShape(all->w, \
    all->our_pok[our]->rect, NULL);
    attack_opponent_three(all, pok, our);
}

void attack_opponent(all *all, int pok, int our, int i)
{
    int degat = all->our_pok[our]->size.x;
    if (all->pokemon[pok]->attack[i]->type_att == 0) {
        degat = openent_physical(all, our, pok, i);
    }
    else {
        degat = openent_spe(all, our, pok, i);
    }
    while (all->our_pok[our]->size.x > degat && all->our_pok[our]->size.x > 0) {
        all->dresseur->time = sfClock_getElapsedTime(all->dresseur->cl);
        if (sfClock_getElapsedTime(all->dresseur->cl).microseconds >= 5000/ 3) {
            all->our_pok[our]->size.x -= 1;
            sfClock_restart(all->dresseur->cl);
        }
        sfRenderWindow_clear(all->w, sfWhite);
        oponent(all, pok);
        our_pok_move(all, our);
        attack_opponent_two(all, pok, our);
    }
}
