/*
** EPITECH PROJECT, 2020
** inventory
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_inventory_two(all *all, int i)
{
    sfRenderWindow_drawSprite(all->w, \
    all->inv_bar[i - 1]->sprite_f, NULL);
    sfSprite_setTextureRect(all->logo_pok[i]->sprite_f, \
    all->our_pok[all->our_inv_pok[i]]->ar_two);
    sfRenderWindow_drawSprite(all->w, \
    all->logo_pok[i]->sprite_f, NULL);
}

void inv_pokemon(all *all, sfVector2i m)
{
    sfEvent e;
    while (sfRenderWindow_isOpen(all->w)) {
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        draw_game(all, all->w);
        sfRenderWindow_drawSprite(all->w, \
        all->inv_pok_board->sprite_f, NULL);
        for (int i = 0; all->our_inv_pok[i] != -1; i++) {
            if (i != 0)
                draw_inventory_two(all, i);
            inv_pv_color(all, i);
        }
        draw_cursor(all->cursor, all->w);
        sfRenderWindow_display(all->w);
        if (inv_quit_fight(all))
            break;
    }
}

void pressed_pokemon(sfRenderWindow *w, all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 1493 && m.x <= 1895) && (m.y >= 300 && m.y <= 400))
        if (all->pok != -1)
            inv_pokemon(all, m);
}
