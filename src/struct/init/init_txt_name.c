/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_txt_name
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

button *init_name_wild_pok(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok((sfVector2f) {20, 65}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}

button *init_name_att_one(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok_att((sfVector2f) {1170, 100}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}

button *init_name_att_two(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok_att((sfVector2f) {1550, 100}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}

button *init_name_att_three(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok_att((sfVector2f) {1170, 270}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}

button *init_name_att_four(void)
{
    button *pnj = malloc(sizeof(struct button_s));
    pnj = init_button_pok_att((sfVector2f) {1550, 270}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfBlack, "Ressources/game/transparente.png");
    sfSprite_setScale(pnj->sprite, (sfVector2f) {3, 3});
    return (pnj);
}