/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_option
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void second_init_opt(opt *opt)
{
    opt->up_sound = init_button((sfVector2f) {850, 550}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "  + VOL");
    opt->down_sound = init_button((sfVector2f) {1350, 550}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "  - VOL");
    opt->back = init_button((sfVector2f) {0, 900}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "   Back");
    opt->s_frame_limit = init_pos_txt((sfVector2f) {150, 250}, \
    create_txt(85, opt->font, sfBlack, "Frame limit :"));
    opt->int_frame_limit = init_pos_txt((sfVector2f) {730, 250}, \
    create_txt(75, opt->font, sfBlack, "64"));
    opt->up_frame_limit = init_button((sfVector2f) {850, 250}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, " + FRAME");
    opt->down_frame_limit = init_button((sfVector2f) {1350, 250}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, " - FRAME");
    opt->res = init_pos_txt((sfVector2f) {150, 750}, \
    create_txt(85, opt->font, sfBlack, "Resolution :"));
    opt->high_res = init_button((sfVector2f) {850, 780}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, " 1920x1080");
    opt->low_res = init_button((sfVector2f) {1350, 780}, (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "  1600x900");
}

opt *init_option(void)
{
    opt *opt = malloc(sizeof(*opt));
    opt->fond = create_sprite("Ressources/menu/option.jpg");
    opt->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    opt->title = init_pos_txt((sfVector2f) {50, 50}, \
    create_txt(90, opt->font, sfBlack, "OPTION"));
    opt->sound = init_pos_txt((sfVector2f) {150, 550}, \
    create_txt(85, opt->font, sfBlack, "Volume :"));
    opt->int_sound = init_pos_txt((sfVector2f) {590, 550}, \
    create_txt(75, opt->font, sfBlack, "100"));
    opt->warning = init_pos_txt((sfVector2f) {800, 800}, \
    create_txt(20, opt->font, sfRed, \
    "WARNING ! Resolution 1600x900 may affect your game experience."));
    second_init_opt(opt);
    return (opt);
}