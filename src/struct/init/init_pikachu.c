/*
** EPITECH PROJECT, 2020
** pikachu
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *pikachu_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 45;
    stat->att = 80;
    stat->att_spe = 75;
    stat->def = 50;
    stat->def_spe = 60;
    stat->vit = 120;
    return stat;
}

void init_pikachu_next(pokemon_t *pers)
{
    pers->attack = pikachu_att(pers);
    pers->stat = pikachu_stat();
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 250;
    pers->pv_pos.y = 138;
    pers->type[0] = ECLAIRE;
    pers->type[1] = ECLAIRE;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_pikachu(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/pikatchu.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/pikachu.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 830;
    pers->position.y = 150;
    pers->ar.left = 10;
    pers->ar.top = 0;
    pers->ar.width = 50;
    pers->ar.height = 60;
    init_pikachu_next(pers);
    return pers;
}

void init_our_pikachu_next(pokemon_t *pers)
{
    pers->attack = pikachu_att(pers);
    pers->stat = pikachu_stat();
    pers->stat->vit += 1;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 11;
    pers->board2 = 11;
    pers->board3 = 12;
    pers->board4 = 1;
    pers->ar_two = init_pikachu_ar(pers);
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_pikachu(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/pikatchu.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/pikachu.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 160;
    pers->position.y = 400;
    pers->ar.left = 10;
    pers->ar.top = 441;
    pers->ar.width = 50;
    pers->ar.height = 60;
    pers->type[0] = ECLAIRE;
    pers->type[1] = ECLAIRE;
    init_our_pikachu_next(pers);
    return pers;
}
