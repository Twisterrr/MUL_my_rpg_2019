/*
** EPITECH PROJECT, 2020
** Init rect
** File description:
** Init rect
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

rect_t *init_inv_pv_four(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1730;
    rect->position.y = 236;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}

rect_t *init_inv_pv_five(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1375;
    rect->position.y = 346;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}

rect_t *init_inv_pv_six(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1730;
    rect->position.y = 370;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}
