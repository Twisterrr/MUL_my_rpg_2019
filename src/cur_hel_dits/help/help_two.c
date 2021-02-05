/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** help_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_help(sfRenderWindow *w, help *help, cursor *cur)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1000)) {
        hover_one(help->back, 370, 910);
    } else
        hover_two(help->back, 370, 900);
    sfRenderWindow_drawSprite(w, help->fond, NULL);
    draw_button(help->back, w);
    draw_pos_txt(help->title, w);
    draw_cursor(cur, w);
}

void help_character(all *all)
{
    sfEvent e;
    while (sfRenderWindow_isOpen(all->w)) {
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        sfRenderWindow_clear(all->w, sfBlack);
        sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
        sfRenderWindow_drawSprite(all->w, all->help_char->sprite_f, NULL);
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1200))
                break;
    }
}

void help_map(all *all)
{
    sfEvent e;
    while (sfRenderWindow_isOpen(all->w)) {
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        sfRenderWindow_clear(all->w, sfBlack);
        sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
        sfRenderWindow_drawSprite(all->w, all->help_map->sprite_f, NULL);
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1200))
                break;
    }
}

void help_fight(all *all)
{
    sfEvent e;
    while (sfRenderWindow_isOpen(all->w)) {
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        sfRenderWindow_clear(all->w, sfBlack);
        sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
        sfRenderWindow_drawSprite(all->w, all->help_fight->sprite_f, NULL);
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1200))
                break;
    }
}