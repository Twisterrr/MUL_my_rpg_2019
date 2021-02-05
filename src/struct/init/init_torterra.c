/*
** EPITECH PROJECT, 2020
** torterra
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *torterra_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 95;
    stat->att = 109;
    stat->att_spe = 75;
    stat->def = 105;
    stat->def_spe = 85;
    stat->vit = 56;
    return stat;
}

void init_torterra_next(pokemon_t *pers)
{
    pers->attack = torterra_att(pers);
    pers->stat = torterra_stat();
    pers->type[0] = PLANTE;
    pers->type[1] = SOL;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 250;
    pers->pv_pos.y = 138;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_torterra(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/torterra.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/torterra.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 750;
    pers->position.y = 10;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 100;
    pers->ar.height = 100;
    init_torterra_next(pers);
    return pers;
}

void init_our_torterra_next(pokemon_t *pers)
{
    pers->attack = torterra_att(pers);
    pers->stat = torterra_stat();
    pers->stat->vit += 1;
    pers->type[0] = PLANTE;
    pers->type[1] = SOL;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 7;
    pers->board2 = 0;
    pers->board3 = 8;
    pers->board4 = 9;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_torterra(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = sfSprite_copy(all->pokemon[0]->sprite_f);
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/torterra.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 200;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 100;
    pers->ar.width = 90;
    pers->ar.height = 100;
    pers->ar_two = init_torterra_ar(pers);
    init_our_torterra_next(pers);
    return pers;
}
