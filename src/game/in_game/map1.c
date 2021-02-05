/*
** EPITECH PROJECT, 2020
** map1
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void change_map1(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[0]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeyDown)) {
        all->pers->position.y = 25;
        sfMusic_pause(all->map[all->game->level]->music);
        all->game->level = 0;
        sfMusic_play(all->map[all->game->level]->music);
    }
}

void change_map3(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[2]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeyRight) && all->grade != 0) {
        all->pers->position.y = 500;
        all->pers->position.x = 200;
        sfMusic_pause(all->map[all->game->level]->music);
        all->game->level = 2;
        sfMusic_play(all->map[all->game->level]->music);
    }
}

void recovery(all *all)
{
    sfMusic_pause(all->map[all->game->level]->music);
    sfMusic *music = create_music("Ressources/musics/recovery.ogg", \
    sfFalse, sfTrue);
    sfMusic_play(music);
    while (sfMusic_getStatus(music) != sfStopped) {
        sfRenderWindow_clear(all->w, sfWhite);
        sfRenderWindow_drawSprite(all->w, all->map[2]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->pers->sprite_f, NULL);
        sfRenderWindow_display(all->w);
    }
    for (int i = 0; all->our_inv_pok[i] != -1; i++) {
        all->our_pok[all->our_inv_pok[i]]->size.x = 245;
        sfRectangleShape_setFillColor(all->our_pok\
        [all->our_inv_pok[i]]->rect, sfGreen);
        sfRectangleShape_setSize(all->our_pok\
        [all->our_inv_pok[i]]->rect, all->our_pok[all->our_inv_pok[i]]->size);
    }
    sfMusic_destroy(music);
    sfMusic_play(all->map[all->game->level]->music);
}

void change_map4(all *all, sfFloatRect bb, sfFloatRect c)
{
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[0]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeyLeft)) {
        all->pers->position.y = 300;
        all->pers->position.x = 1600;
        sfMusic_pause(all->map[all->game->level]->music);
        all->game->level = 1;
        sfMusic_play(all->map[all->game->level]->music);
    }
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[10]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeySpace))
        recovery(all);
}
