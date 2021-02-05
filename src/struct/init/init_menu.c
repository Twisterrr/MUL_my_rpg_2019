/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_menu
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

menu *init_menu(void)
{
    menu *menu = malloc(sizeof(*menu));
    menu->fond = create_sprite("Ressources/menu/menu.jpg");
    sfSprite_scale(menu->fond, (sfVector2f) {0.5, 0.5});
    menu->start = create_sprite("Ressources/menu/start.png");
    sfSprite_scale(menu->start, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(menu->start, (sfVector2f) {740, 600});
    menu->title = create_sprite("Ressources/menu/title.png");
    sfSprite_scale(menu->title, (sfVector2f) {0.2, 0.2});
    sfSprite_setPosition(menu->title, (sfVector2f) {585, 20});
    menu->music = create_music("Ressources/musics/menu.ogg", sfTrue, sfTrue);
    menu->sound_buffer = sfSoundBuffer_createFromFile( \
    "Ressources/musics/button_press.ogg");
    menu->sound_button = sfSound_create();
    sfSound_setVolume(menu->sound_button, 100);
    sfSound_setBuffer(menu->sound_button, menu->sound_buffer);
    menu->wait = sfClock_create();
    menu->next = init_menu_next();
    return (menu);
}