/*
** EPITECH PROJECT, 2020
** infernape
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *staraptor_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 85;
    stat->att = 120;
    stat->att_spe = 50;
    stat->def = 70;
    stat->def_spe = 60;
    stat->vit = 100;
    return stat;
}

void init_staraptor_next(pokemon_t *pers)
{
    pers->attack = staraptor_att(pers);
    pers->stat = staraptor_stat();
    pers->type[0] = VOL;
    pers->type[1] = NORMALE;
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

pokemon_t *init_staraptor(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/staraptor.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/staraptor.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 780;
    pers->position.y = 110;
    pers->ar.left = 10;
    pers->ar.top = 0;
    pers->ar.width = 65;
    pers->ar.height = 75;
    init_staraptor_next(pers);
    return pers;
}

void init_our_staraptor_next(pokemon_t *pers)
{
    pers->attack = staraptor_att(pers);
    pers->stat = staraptor_stat();
    pers->stat->vit += 1;
    pers->type[0] = VOL;
    pers->type[1] = NORMALE;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 4;
    pers->board2 = 6;
    pers->board3 = 12;
    pers->board4 = 4;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_staraptor(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = sfSprite_copy(all->pokemon[6]->sprite_f);
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/staraptor.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 160;
    pers->position.y = 400;
    pers->ar.left = 10;
    pers->ar.top = 356;
    pers->ar.width = 65;
    pers->ar.height = 60;
    pers->ar_two = init_staraptor_ar(pers);
    init_our_staraptor_next(pers);
    return pers;
}
