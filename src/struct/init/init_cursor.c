/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_cursor
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

cursor *init_cursor(void)
{
    cursor *cur = malloc(sizeof(*cur));
    cur->cursor = create_sprite("Ressources/menu/cursor.png");
    sfSprite_scale(cur->cursor, (sfVector2f) {0.3, 0.3});
    cur->idle = (sfIntRect) {90, 120, 200, 200};
    cur->press = (sfIntRect) {338, 113, 192, 208};
    cur->choose = 0;
    cur->clock = sfClock_create();
    return (cur);
}
