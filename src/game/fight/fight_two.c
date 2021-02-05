/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int fight_game(all *all, int pok, int our, int i)
{
    sfRenderWindow_clear(all->w, sfWhite);
    close_game(all);
    sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
    oponent(all, pok);
    our_pok_move(all, our);
    sfRenderWindow_drawSprite(all->w, all->pokemon[pok]->sprite_f, NULL);
    if (sfKeyboard_isKeyPressed(sfKeySpace) && i != 1) {
        i = 1;
        sfSound_play(all->our_pok[our]->sound_pok);
    }
    return i;
}

void fight_music(all *all, int pok)
{
    sfMusic_pause(all->map[all->game->level]->music);
    all->dresseur->ar.left = 0;
    sfSprite_setTextureRect(all->dresseur->sprite_f, all->dresseur->ar);
    sfSound_play(all->pokemon[pok]->sound_pok);
    name_att(all, pok, 4);
}

void fight_regroup(all *all, int i, int our, int pok)
{
    pok_dresseur(all, i);
    if (all->dresseur->ar.left >= 720)
        fight_dresseur_talk(all, our);
    draw_fight(all, our, pok);
}