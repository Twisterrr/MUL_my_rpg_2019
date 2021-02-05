/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_menu_next
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

menu_next *init_menu_next(void)
{
    menu_next *next = malloc(sizeof(*next));
    next->fond = create_sprite("Ressources/menu/pokeball_menu.jpg");
    next->play = init_button((sfVector2f) {730, 300}, (sfIntRect) \
    {370, 465, 532, 100}, sfColor_fromRGB(255, 255, 0), "   Play");
    next->quit = init_button((sfVector2f) {730, 500}, (sfIntRect) \
    {370, 465, 532, 100}, sfColor_fromRGB(255, 255, 0), "   Quit");
    next->option = init_button((sfVector2f) {730, 700}, (sfIntRect) \
    {370, 465, 532, 100}, sfColor_fromRGB(255, 255, 0), "  Option");
    next->help = create_sprite("Ressources/menu/button_help.png");
    next->rect.left = 20;
    next->rect.top = 102;
    next->rect.width = 44;
    next->rect.height = 46;
    sfSprite_setScale(next->help, (sfVector2f) {2, 2});
    sfSprite_setPosition(next->help, (sfVector2f) {1800, 100});
    sfSprite_setTextureRect(next->help, next->rect);
    next->h = init_help();
    return (next);
}