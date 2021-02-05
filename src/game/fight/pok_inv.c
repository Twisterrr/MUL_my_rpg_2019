/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** inventory
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int choose_inv_pok_next(all *all, int i, sfVector2i m)
{
    if ((m.x >= 1500 && m.x <= 2000) && (m.y >= 130 && m.y <= 250) && i >= 3) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[3]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[3]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    if ((m.x >= 1200 && m.x <= 1500) && (m.y >= 245 && m.y <= 370) && i >= 4) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[4]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[4]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    if ((m.x >= 1500 && m.x <= 2000) && (m.y >= 255 && m.y <= 375) && i >= 5) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[5]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[5]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    return -1;
}

int choose_inv_pok(all *all, int i)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1200 && m.x <= 1500) && (m.y >= 5 && m.y <= 125)) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[0]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[0]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    if ((m.x >= 1500 && m.x <= 2000) && (m.y >= 3 && m.y <= 130) && i >= 1) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[1]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[1]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    if ((m.x >= 1200 && m.x <= 1500) && (m.y >= 125 && m.y <= 240) && i >= 2) {
        sfRenderWindow_drawSprite(all->w, all->inv_bar_c[2]->sprite_f, NULL);
        sfRenderWindow_drawSprite(all->w, all->logo_pok[2]->sprite_f, NULL);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return i + 3;
    }
    return choose_inv_pok_next(all, i, m);
}

void draw_inc_fight(all *all, int pok, int our)
{
    sfRenderWindow_clear(all->w, sfWhite);
    sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
    oponent(all, pok);
    our_pok_move(all, our);
    sfRenderWindow_drawSprite(all->w, all->pokemon[pok]->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->our_pok[our]->sprite_f, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->pokemon[pok]->rect, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->our_pok[our]->rect, NULL);
    name_wild_pok(all, pok);
    sfRenderWindow_drawSprite(all->w, \
    all->inv_pok_board->sprite_f, NULL);
}

void inv_pv_color(all *all, int i)
{
    sfSprite_setTextureRect(all->logo_pok[i]->sprite_f, \
    all->our_pok[all->our_inv_pok[i]]->ar_two);
    sfRenderWindow_drawSprite(all->w, all->logo_pok[i]->sprite_f, NULL);
    all->inv_pv[i]->size.x = \
    150 * all->our_pok[all->our_inv_pok[i]]->size.x / 245;
    if (all->inv_pv[i]->size.x < 50)
        sfRectangleShape_setFillColor(all->inv_pv[i]->rect, sfRed);
    else if (all->inv_pv[i]->size.x >= 50 && all->inv_pv[i]->size.x <= 75)
        sfRectangleShape_setFillColor(all->inv_pv[i]->rect, sfYellow);
    else
        sfRectangleShape_setFillColor(all->inv_pv[i]->rect, sfGreen);
    sfRectangleShape_setSize(all->inv_pv[i]->rect, all->inv_pv[i]->size);
    sfRenderWindow_drawRectangleShape(all->w, all->inv_pv[i]->rect, NULL);
}

int inventory_catch(all *all, int our, int pok)
{
    sfEvent e;
    while (sfRenderWindow_isOpen(all->w)) {
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        draw_inc_fight(all, pok, our);
        for (int i = 0; all->our_inv_pok[i] != -1; i++) {
            if (i != 0)
                draw_inventory_two(all, i);
            int ret = choose_inv_pok(all, i);
            if (ret != -1)
                return ret;
            inv_pv_color(all, i);
        }
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (inv_quit_fight(all))
            break;
    }
    return -1;
}
