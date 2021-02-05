/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_txt_name_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

button *init_button_pok(sfVector2f pos, \
sfIntRect rect, sfColor color, char *txt)
{
    button *button = malloc(sizeof(*button));
    button->font = sfFont_createFromFile("Ressources/polices/text.TTF");
    button->txt = create_txt(45, button->font, color, txt);
    button->pos = pos;
    button->rect = rect;
    button->sprite = create_sprite("Ressources/game/transparente.png");
    return (button);
}

button *init_button_pok_att(sfVector2f pos, \
sfIntRect rect, sfColor color, char *txt)
{
    button *button = malloc(sizeof(*button));
    button->font = sfFont_createFromFile("Ressources/polices/text.TTF");
    button->txt = create_txt(25, button->font, color, txt);
    button->pos = pos;
    button->rect = rect;
    button->sprite = create_sprite("Ressources/game/transparente.png");
    return (button);
}

button *init_name_pok(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok((sfVector2f) {655, 500}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}