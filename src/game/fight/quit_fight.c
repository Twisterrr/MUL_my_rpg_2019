/*
** EPITECH PROJECT, 2020
** quit
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int quit_fight(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1400 && m.x <= 1650) && m.y >= 500 && m.y <= 600)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    return (0);
}

int catch_fight(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1200 && m.x <= 1450) && m.y >= 380 && m.y <= 500)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    return (0);
}

int inv_button_fight(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1650 && m.x <= 2000) && m.y >= 380 && m.y <= 470)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    return (0);
}

int inv_quit_fight(all *all)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(all->w);
    if ((m.x >= 1660 && m.x <= 2000) && m.y >= 471 && m.y <= 600)
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 1;
    return (0);
}
