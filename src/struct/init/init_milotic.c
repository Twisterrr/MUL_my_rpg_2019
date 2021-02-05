/*
** EPITECH PROJECT, 2020
** milotic
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *milotic_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 95;
    stat->att = 60;
    stat->att_spe = 100;
    stat->def = 79;
    stat->def_spe = 125;
    stat->vit = 81;
    return stat;
}

void init_milotic_next(pokemon_t *pers)
{
    pers->attack = milotic_att(pers);
    pers->stat = milotic_stat();
    pers->type[0] = EAU;
    pers->type[1] = EAU;
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

pokemon_t *init_milotic(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/milotic.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/milotic.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 770;
    pers->position.y = 90;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 85;
    pers->ar.height = 85;
    init_milotic_next(pers);
    return pers;
}

void init_our_milotic_next(pokemon_t *pers)
{
    pers->attack = milotic_att(pers);
    pers->stat = milotic_stat();
    pers->stat->vit += 1;
    pers->type[0] = EAU;
    pers->type[1] = EAU;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 1;
    pers->board2 = 3;
    pers->board3 = 10;
    pers->board4 = 1;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_milotic(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/milotic.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/milotic.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 160;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 500;
    pers->ar.width = 85;
    pers->ar.height = 85;
    pers->ar_two = init_milotic_ar(pers);
    init_our_milotic_next(pers);
    return pers;
}
