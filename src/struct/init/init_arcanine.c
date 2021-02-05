/*
** EPITECH PROJECT, 2020
** arcanine
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *arcanine_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 90;
    stat->att = 110;
    stat->att_spe = 100;
    stat->def = 80;
    stat->def_spe = 80;
    stat->vit = 95;
    return stat;
}

void init_arcanine_next(pokemon_t *pers)
{
    pers->attack = arcanine_att(pers);
    pers->stat = arcanine_stat();
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 250;
    pers->pv_pos.y = 138;
    pers->type[0] = FEU;
    pers->type[1] = FEU;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_arcanine(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/arcanine.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/arcanine.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 700;
    pers->position.y = -170;
    pers->ar.left = 0;
    pers->ar.top = -10;
    pers->ar.width = 80;
    pers->ar.height = 140;
    init_arcanine_next(pers);
    return pers;
}

void init_our_arcanine_next(pokemon_t *pers)
{
    pers->attack = arcanine_att(pers);
    pers->stat = arcanine_stat();
    pers->stat->vit += 1;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 5;
    pers->board2 = 11;
    pers->board3 = 12;
    pers->board4 = 0;
    pers->ar_two = init_arcanine_ar(pers);
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_arcanine(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/arcanine.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/arcanine.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 100;
    pers->position.y = 350;
    pers->ar.left = 0;
    pers->ar.top = 135;
    pers->ar.width = 80;
    pers->ar.height = 150;
    pers->type[0] = FEU;
    pers->type[1] = FEU;
    init_our_arcanine_next(pers);
    return pers;
}
