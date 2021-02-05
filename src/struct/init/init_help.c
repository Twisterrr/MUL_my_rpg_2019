/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_help
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_help_char(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/menu/helpcharacter.png");
    pers->scale.x = 0.85;
    pers->scale.y = 0.75;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *init_help_fight(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/menu/helpfight.png");
    pers->scale.x = 0.85;
    pers->scale.y = 0.7;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

game_t *init_help_map(void)
{
    game_t *pers = malloc(sizeof(struct s_game));
    pers->sprite_f = create_sprite("Ressources/menu/helpmap.png");
    pers->scale.x = 0.85;
    pers->scale.y = 0.7;
    sfSprite_setScale(pers->sprite_f, pers->scale);
    return pers;
}

help *init_help(void)
{
    help *h = malloc(sizeof(*h));
    h->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    h->fond = create_sprite("Ressources/menu/help.jpg");
    sfSprite_setScale(h->fond, (sfVector2f) {1.9, 1.8});
    h->back = init_button((sfVector2f) {0, 900}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "  Back");
    h->title = init_pos_txt((sfVector2f) {50, 50}, \
    create_txt(90, h->font, sfBlack, "HELP"));
    return (h);
}