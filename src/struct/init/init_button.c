/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_button
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

button *init_button(sfVector2f pos, sfIntRect rect, sfColor color, char *txt)
{
    button *button = malloc(sizeof(*button));
    button->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    button->txt = create_txt(75, button->font, color, txt);
    button->pos = pos;
    button->rect = rect;
    button->sprite = create_sprite("Ressources/menu/button.png");
    return (button);
}
