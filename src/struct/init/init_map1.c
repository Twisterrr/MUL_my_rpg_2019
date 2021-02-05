/*
** EPITECH PROJECT, 2020
** map1
** File description:
** rpg
*/

#include "../../../include/struct.h"
#include "../../../include/rpg.h"

lay_above_t *roof_f(char *name, int x, int y)
{
    lay_above_t *roof1 = malloc(sizeof(lay_above_t));
    roof1->sprite_f = create_sprite(name);
    roof1->scale.x = 5;
    roof1->scale.y = 5;
    roof1->pos.x = x;
    roof1->pos.y = y;
    sfSprite_setScale(roof1->sprite_f, roof1->scale);
    return (roof1);
}

lay_above_t **lay_above_f(void)
{
    lay_above_t ** la = malloc(sizeof(lay_above_t *) * 4);
    la[0] = roof_f("Ressources/game/roof1.png", 1455, 845);
    la[1] = roof_f("Ressources/game/roof1.png", 575, 230);
    la[2] = roof_f("Ressources/game/roof2.png", 680, 950);
    la[3] = roof_f("Ressources/game/roof2.png", 1480, 335);
    return la;
}

map_t *map1_init(void)
{
    map_t *map = malloc(sizeof(struct s_map));
    map->sprite_f = create_sprite("Ressources/game/map_one.png");
    map->music = create_music("Ressources/musics/map1.ogg", sfTrue, sfFalse);
    map->scale.x = 5;
    map->scale.y = 5;
    map->position.x = -250;
    map->position.y = -900;
    map->obstacles = 11;
    sfSprite_setPosition(map->sprite_f, map->position);
    sfSprite_setScale(map->sprite_f, map->scale);
    map->lay_above = lay_above_f();
    map->obstacle = obstacle_f(map);
    map->obstacle = grass0_f(map);
    return map;
}

game_t *catch_init(void)
{
    game_t *p = malloc(sizeof(struct s_game));
    p->sprite_f = create_sprite("Ressources/game/pokeball_catch.png");
    p->cl = sfClock_create();
    p->scale.x = 5;
    p->scale.y = 5;
    p->position.x = 840;
    p->position.y = 50;
    p->ar.left = -16;
    p->ar.top = 26;
    p->ar.width = 17;
    p->ar.height = 60;
    sfSprite_setPosition(p->sprite_f, p->position);
    sfSprite_setScale(p->sprite_f, p->scale);
    sfSprite_setTextureRect(p->sprite_f, p->ar);
    return p;
}

game_t *init_hydro_pump(void)
{
    game_t *p = malloc(sizeof(struct s_game));
    p->sprite_f = create_sprite("Ressources/game/hydro_pump.png");
    p->cl = sfClock_create();
    p->scale.x = 4.2;
    p->scale.y = 4;
    p->position.x = -1100;
    p->position.y = -145;
    p->ar.left = 0;
    p->ar.top = 0;
    p->ar.width = 700;
    p->ar.height = 180;
    sfSprite_setPosition(p->sprite_f, p->position);
    sfSprite_setScale(p->sprite_f, p->scale);
    sfSprite_setTextureRect(p->sprite_f, p->ar);
    return p;
}
