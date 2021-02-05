/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pause
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

pause_s *init_pause(void)
{
    pause_s *pause = malloc(sizeof(*pause));
    pause->fond = create_sprite("Ressources/game/pause.png");
    pause->font = sfFont_createFromFile("Ressources/polices/pokemon.ttf");
    pause->title = init_pos_txt((sfVector2f) {1560, 110}, \
    create_txt(30, pause->font, sfYellow, "Pokemon Generations"));
    pause->pokemon = init_pos_txt((sfVector2f) {1600, 330}, \
    create_txt(70, pause->font, sfYellow, "Pokemon"));
    pause->resume = init_pos_txt((sfVector2f) {1650, 200}, \
    create_txt(70, pause->font, sfYellow, "Resume"));
    pause->menu = init_pos_txt((sfVector2f) {1650, 640}, \
    create_txt(70, pause->font, sfYellow, "Menu"));
    pause->inventory = init_pos_txt((sfVector2f) {1650, 480}, \
    create_txt(70, pause->font, sfYellow, "Help"));
    pause->option = init_pos_txt((sfVector2f) {1650, 780}, \
    create_txt(70, pause->font, sfYellow, "Option"));
    pause->quit = init_pos_txt((sfVector2f) {1650, 930}, \
    create_txt(70, pause->font, sfYellow, "Quit"));
    return (pause);
}