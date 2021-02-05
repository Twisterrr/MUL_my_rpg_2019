/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_sign
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

button *init_sign(void)
{
    button *sign = malloc(sizeof(struct button_s));
    sign = init_button((sfVector2f) {0, 700}, \
    (sfIntRect) \
    {370, 465, 532, 100}, sfYellow, "\n    Welcome to Techland !");
    sfSprite_setScale(sign->sprite, (sfVector2f) {3, 3});
    return (sign);
}