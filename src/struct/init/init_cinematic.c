/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_cinematic
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_cinematic_one(void)
{
    game_t *g = malloc(sizeof(*g));
    g->sprite_f = create_sprite("Ressources/menu/chen_cine.png");
    sfSprite_setPosition(g->sprite_f, (sfVector2f) {350, 270});
    g->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    g->texxt = init_pos_txt((sfVector2f) {600, 100}, \
    create_txt(40, g->font, sfYellow, \
    "Welcome in the beautiful world of Pokemon Generation !\n"));
    g->cine = init_pos_txt((sfVector2f) {600, 200}, \
    create_txt(30, g->font, sfYellow, \
    "Young adventurer, you have received a mission of the greatest \
    importance!\n \
    You will have to recover the four grade that were stolen by\n \
    the Pitech Team in order to realize a maquiavellic project !"));
    g->last = init_pos_txt((sfVector2f) {700, 400}, \
    create_txt(40, g->font, sfYellow, \
    "We're counting on you ! \
    \nGood Luck"));
    return (g);
}

game_t *init_cinematic(void)
{
    game_t *g = malloc(sizeof(*g));
    g->sprite_f = create_sprite("Ressources/menu/chen_cine.png");
    sfSprite_setPosition(g->sprite_f, (sfVector2f) {350, 270});
    g->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    g->texxt = init_pos_txt((sfVector2f) {600, 100}, \
    create_txt(40, g->font, sfYellow, \
    "Welcome to the BTTF of our RPG Pokemon !\n"));
    g->cine = init_pos_txt((sfVector2f) {600, 200}, \
    create_txt(30, g->font, sfYellow, \
    "Congratulation you beat Damien and you have the grade A !\n \
    but you're not the best tech one of the promo\n \
    You must beat the Champion the be the best !\n \
    But the Champion is realy strong, more than Damien\n \
    So you can now catch Wild pokemon"));
    g->last = init_pos_txt((sfVector2f) {700, 400}, \
    create_txt(40, g->font, sfYellow, \
    "\nGood Luck"));
    return (g);
}
