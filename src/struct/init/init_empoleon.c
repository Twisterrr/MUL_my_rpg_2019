/*
** EPITECH PROJECT, 2020
** empoleon
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *empoleon_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 84;
    stat->att = 86;
    stat->att_spe = 111;
    stat->def = 88;
    stat->def_spe = 101;
    stat->vit = 60;
    return stat;
}

void init_empoleon_next(pokemon_t *pers)
{
    pers->attack = empoleon_att(pers);
    pers->stat = empoleon_stat();
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 250;
    pers->pv_pos.y = 138;
    pers->type[0] = EAU;
    pers->type[1] = ACIER;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_empoleon(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/empoleon.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/empoleon.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 650;
    pers->position.y = 80;
    pers->ar.left = 10;
    pers->ar.top = 55;
    pers->ar.width = 110;
    pers->ar.height = 100;
    init_empoleon_next(pers);
    return pers;
}

void init_our_empoleon_next(pokemon_t *pers)
{
    pers->attack = empoleon_att(pers);
    pers->stat = empoleon_stat();
    pers->stat->vit += 1;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 1;
    pers->board2 = 2;
    pers->board3 = 3;
    pers->board4 = 4;
    pers->ar_two = init_empoleon_ar(pers);
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_empoleon(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = sfSprite_copy(all->pokemon[1]->sprite_f);
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/empoleon.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 100;
    pers->position.y = 300;
    pers->ar.left = 20;
    pers->ar.top = 150;
    pers->ar.width = 105;
    pers->ar.height = 90;
    pers->type[0] = EAU;
    pers->type[1] = ACIER;
    init_our_empoleon_next(pers);
    return pers;
}
