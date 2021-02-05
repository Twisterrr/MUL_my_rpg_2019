/*
** EPITECH PROJECT, 2020
** fight
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int fight_destroy(all *all, sfMusic *music, int pok)
{
    sfMusic_destroy(music);
    sfMusic_play(all->map[all->game->level]->music);
    return 1;
}

void fight_dresseur_talk(all *all, int our)
{
    sfRenderWindow_drawSprite(all->w, all->our_pok[our]->sprite_f, \
    NULL);
    sfRenderWindow_drawSprite(all->w, all->bar->sprite_f, NULL);
    sfRenderWindow_drawRectangleShape(all->w, \
    all->our_pok[our]->rect, NULL);
    name_our_pok(all, our);
    sfText_setString(all->pnj_one->text->txt, \
    "\n   What will you do ?");
}

int fight_one(all *all, sfMusic *music, int pok, int fight_int)
{
    if (fight_int == 2) {
        sfMusic_destroy(music);
        return 2;
    }
}

void draw_board(all *all, int our)
{
    sfRenderWindow_drawSprite(all->w, \
    all->board1[all->our_pok[our]->board1]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board2[all->our_pok[our]->board2]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board3[all->our_pok[our]->board3]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->board4[all->our_pok[our]->board4]->sprite_f, NULL);
}

void draw_fight(all *all, int our, int pok)
{
    sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->pokemon[pok]->rect, NULL);
    draw_board(all, our);
    sfRenderWindow_drawSprite(all->w, \
    all->board_quit->sprite_f, NULL);
    name_wild_pok(all, pok);
    what_att_for_our_pok(all, our);
    sfRenderWindow_drawSprite(all->w, \
    all->catch_button->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, \
    all->inv_pok->sprite_f, NULL);
    draw_cursor(all->cursor, all->w);
    sfRenderWindow_display(all->w);
}
