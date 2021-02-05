/*
** EPITECH PROJECT, 2020
** infernape
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

stat_t *infernape_stat(void)
{
    stat_t *stat = malloc(sizeof(stat_t));
    stat->pv = 76;
    stat->att = 104;
    stat->att_spe = 104;
    stat->def = 71;
    stat->def_spe = 71;
    stat->vit = 108;
    return stat;
}

void init_infernape_next(pokemon_t *pers)
{
    pers->attack = infernape_att(pers);
    pers->stat = infernape_stat();
    pers->type[0] = FEU;
    pers->type[1] = COMBAT;
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

pokemon_t *init_infernape(void)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = create_sprite("Ressources/game/infernape.png");
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/infernape.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 4;
    pers->scale.y = 4;
    pers->position.x = 700;
    pers->position.y = 80;
    pers->ar.left = 10;
    pers->ar.top = 55;
    pers->ar.width = 80;
    pers->ar.height = 80;
    init_infernape_next(pers);
    return pers;
}

void init_our_infernape_next(pokemon_t *pers)
{
    pers->attack = infernape_att(pers);
    pers->stat = infernape_stat();
    pers->stat->vit += 1;
    pers->type[0] = FEU;
    pers->type[1] = COMBAT;
    pers->rect = sfRectangleShape_create();
    pers->size.x = 245;
    pers->size.y = 20;
    pers->pv_pos.x = 870;
    pers->pv_pos.y = 590;
    pers->board1 = 5;
    pers->board2 = 6;
    pers->board3 = 5;
    pers->board4 = 0;
    sfRectangleShape_setFillColor(pers->rect, sfGreen);
    sfRectangleShape_setSize(pers->rect, pers->size);
    sfRectangleShape_setPosition(pers->rect, pers->pv_pos);
    sfSprite_setPosition(pers->sprite_f, pers->position);
    sfSprite_setScale(pers->sprite_f, pers->scale);
    sfSprite_setTextureRect(pers->sprite_f, pers->ar);
}

pokemon_t *init_our_infernape(all *all)
{
    pokemon_t *pers = malloc(sizeof(struct pokemon_s));
    pers->cl = sfClock_create();
    pers->sprite_f = sfSprite_copy(all->pokemon[2]->sprite_f);
    pers->sound_buffer_pok = sfSoundBuffer_createFromFile( \
        "Ressources/musics/infernape.ogg");
    pers->sound_pok = sfSound_create();
    sfSound_setBuffer(pers->sound_pok, pers->sound_buffer_pok);
    pers->scale.x = 5;
    pers->scale.y = 5;
    pers->position.x = 200;
    pers->position.y = 300;
    pers->ar.left = 0;
    pers->ar.top = 140;
    pers->ar.width = 90;
    pers->ar.height = 90;
    pers->ar_two = init_infernape_ar(pers);
    init_our_infernape_next(pers);
    return pers;
}
