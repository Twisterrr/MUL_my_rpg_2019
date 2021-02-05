/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** choose_pok
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int choose_infernape(all *all, sfEvent e, sfVector2i m)
{
    if ((m.x >= 200 && m.x <= 450) && m.y >= 670 && m.y <= 900) {
        all->pokeball->position.x = 210;
        all->pokeball->position.y = 680;
        sfSprite_setPosition(all->pokeball->sprite_f, \
        all->pokeball->position);
        sfRenderWindow_drawSprite(all->w, all->pokeball->sprite_f, NULL);
        if (e.type == sfEvtMouseButtonPressed) {
                all->our_inv_pok[0] = 2;
                all->pok = 2;
                return 1;
        }
    }
    return (0);
}

int chosse_torterra(all *all, sfEvent e, sfVector2i m)
{
    if ((m.x >= 860 && m.x <= 1110) && m.y >= 670 && m.y <= 900) {
        all->pokeball->position.x = 870;
        all->pokeball->position.y = 680;
        sfSprite_setPosition(all->pokeball->sprite_f, \
        all->pokeball->position);
        sfRenderWindow_drawSprite(all->w, all->pokeball->sprite_f, NULL);
        if (e.type == sfEvtMouseButtonPressed) {
            all->our_inv_pok[0] = 0;
            all->pok = 0;
            return 1;
        }
    }
    return (0);
}

int choose_empoleon(all *all, sfEvent e, sfVector2i m)
{
    if ((m.x >= 1485 && m.x <= 1685) && m.y >= 670 && m.y <= 900) {
        all->pokeball->position.x = 1495;
        all->pokeball->position.y = 680;
        sfSprite_setPosition(all->pokeball->sprite_f, \
        all->pokeball->position);
        sfRenderWindow_drawSprite(all->w, all->pokeball->sprite_f, NULL);
        if (e.type == sfEvtMouseButtonPressed) {
            all->our_inv_pok[0] = 1;
            all->pok = 1;
            return 1;
        }
    }
    return (0);
}

void starter(all *all, sfEvent e)
{
    while (sfRenderWindow_isOpen(all->w)) {
        sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        sfRenderWindow_drawSprite(all->w, all->starter->sprite_f, NULL);
        if (choose_infernape(all, e, m)) break;
        if (chosse_torterra(all, e, m)) break;
        if (choose_empoleon(all, e, m)) break;
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
    }
}
