/*
** EPITECH PROJECT, 2020
** garchomp
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *garchomp_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 108;
    stat->att = 130;
    stat->att_spe = 80;
    stat->def = 95;
    stat->def_spe = 85;
    stat->vit = 102;
    return stat;
}

void init_garchomp_next(pokemon_t *pers)
{
    pers->attack = garchomp_att(pers);
    pers->stat = garchomp_stat();
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 250;
    pers->pv_pos.y = 138;
    pers->type[0] = DRAGON;
    pers->type[1] = SOL;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_garchomp(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/garchomp.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
    "Ressources/musics/garchomp.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 650;
    pers->position.y = 60;
    pers->ar.left = 0;
    pers->ar.top = 0;
    pers->ar.width = 110;
    pers->ar.height = 100;
    init_garchomp_next(pers);
    return pers;
}

void init_our_garchomp_next(pokemon_t *pers)
{
    pers->attack = garchomp_att(pers);
    pers->stat = garchomp_stat();
    pers->stat->vit += 1;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 0;
    pers->board2 = 10;
    pers->board3 = 5;
    pers->board4 = 9;
    pers->ar_two = init_garchomp_ar(pers);
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_garchomp(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/garchomp.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/garchomp.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 100;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 100;
    pers->ar.width = 105;
    pers->ar.height = 90;
    pers->type[0] = DRAGON;
    pers->type[1] = SOL;
    init_our_garchomp_next(pers);
    return pers;
}
