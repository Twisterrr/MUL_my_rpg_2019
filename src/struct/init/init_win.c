/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_win
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t *init_win(void)
{
    game_t *win = malloc(sizeof(*win));
    win->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    win->sprite_f = create_sprite("Ressources/game/win.jpg");
    sfSprite_scale(win->sprite_f, (sfVector2f) {2.2, 2.2});
    win->texxt = init_pos_txt((sfVector2f) {20, 950}, \
    create_txt(50, win->font, sfWhite, "Credits"));
    return (win);
}