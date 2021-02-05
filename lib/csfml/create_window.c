/*
** EPITECH PROJECT, 2019
** duck_hunt
** File description:
** create_window
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

sfRenderWindow *create_window(char *name, int height, int width, int style)
{
    sfRenderWindow *win;
    sfVideoMode v_d = {width, height, 32};

    win = sfRenderWindow_create(v_d, name, style, NULL);
    return (win);
}
