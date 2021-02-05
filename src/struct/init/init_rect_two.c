/*
** EPITECH PROJECT, 2020
** rect
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

rect_t *init_rect1(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));

    rect->rect = sfRectangleShape_create();
    rect->position.x = 100;
    rect->position.y = 100;
    rect->size.x = 100;
    rect->size.y = 100;

    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}

rect_t *init_inv_pv(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1375;
    rect->position.y = 76;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}

rect_t *init_inv_pv_two(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1730;
    rect->position.y = 100;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}

rect_t *init_inv_pv_three(void)
{
    rect_t *rect = malloc(sizeof(struct rect_s));
    rect->rect = sfRectangleShape_create();
    rect->position.x = 1375;
    rect->position.y = 210;
    rect->size.x = 150;
    rect->size.y = 10;
    sfRectangleShape_setFillColor(rect->rect, sfGreen);
    sfRectangleShape_setSize(rect->rect, rect->size);
    sfRectangleShape_setPosition(rect->rect, rect->position);
    return rect;
}
