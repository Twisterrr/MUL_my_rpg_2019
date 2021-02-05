/*
** EPITECH PROJECT, 2020
** milotic
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *gliscor_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 75;
    stat->att = 95;
    stat->att_spe = 45;
    stat->def = 125;
    stat->def_spe = 75;
    stat->vit = 95;
    return stat;
}

void init_gliscor_next(pokemon_t *pers)
{
    pers->attack = gliscor_att(pers);
    pers->stat = gliscor_stat();
    pers->type[0] = VOL;
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

pokemon_t *init_gliscor(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/gliscor.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/gliscor.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 710;
    pers->position.y = 30;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 88;
    pers->ar.height = 85;
    init_gliscor_next(pers);
    return pers;
}

void init_our_gliscor_next(pokemon_t *pers)
{
    pers->attack = gliscor_att(pers);
    pers->stat = gliscor_stat();
    pers->stat->vit += 1;
    pers->type[0] = SOL;
    pers->type[1] = VOL;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 0;
    pers->board2 = 4;
    pers->board3 = 8;
    pers->board4 = 11;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_gliscor(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/gliscor.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/gliscor.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 120;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 392;
    pers->ar.width = 88;
    pers->ar.height = 85;
    pers->ar_two = init_gliscor_ar(pers);
    init_our_gliscor_next(pers);
    return pers;
}
