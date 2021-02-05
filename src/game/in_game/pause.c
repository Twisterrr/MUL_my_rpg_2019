/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pause
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void event_pause(sfRenderWindow *w, all *all)
{
    sfEvent e;
    while (sfRenderWindow_pollEvent(w, &e)) {
        if (e.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            all->back = 1;
        if (e.type == sfEvtMouseButtonPressed) {
            all->cursor->choose = 10;
            pressed_resume(w, all);
            pressed_menu(w, all);
            pressed_help(w, all);
            pressed_pokemon(w, all);
            pressed_option_pause(w, all);
            pressed_quit_two(w, all);
        }
    }
}

void draw_pause(sfRenderWindow *w, all *all)
{
    while (sfRenderWindow_isOpen(w) && all->back == 0) {
        draw_game(all, w);
        sfSprite_setPosition(all->pause->fond, (sfVector2f) {1455, 70});
        sfRenderWindow_drawSprite(w, all->pause->fond, NULL);
        draw_pos_txt(all->pause->title, w);
        draw_pos_txt(all->pause->resume, w);
        draw_pos_txt(all->pause->pokemon, w);
        draw_pos_txt(all->pause->menu, w);
        draw_pos_txt(all->pause->inventory, w);
        draw_pos_txt(all->pause->option, w);
        draw_pos_txt(all->pause->quit, w);
        draw_cursor(all->cursor, w);
        event_pause(w, all);
        sfRenderWindow_display(w);
    }
    all->back -= 1;
}
