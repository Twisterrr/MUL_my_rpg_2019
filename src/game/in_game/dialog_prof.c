/*
** EPITECH PROJECT, 2020
** prof
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void prof_d(all *all, sfEvent e)
{
    int i = 0;
    while (sfRenderWindow_isOpen(all->w)) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
        sfText_setString(all->prof->text->txt, all->prof->text->text[i]);
        sfRenderWindow_drawSprite(all->w, all->prof->text->sprite, NULL);
        sfRenderWindow_drawText(all->w, all->prof->text->txt, NULL);
        sfRenderWindow_display(all->w);
        while (sfRenderWindow_pollEvent(all->w, &e))
            if (e.type == sfEvtClosed)
                sfRenderWindow_close(all->w);
        sfSleep((sfMilliseconds(90)));
        if (sfKeyboard_isKeyPressed(sfKeySpace)) i++;
        sfSleep((sfMilliseconds(90)));
        if (i == all->prof->text->nb_text) break;
    }
}

void speak_prof(all *all, sfFloatRect bb, sfFloatRect c)
{
    sfEvent e;
    init_text_prof(all->prof->text);
    if (sfFloatRect_intersects(&bb, \
        &all->map[all->game->level]->obstacle[8]->rect, &c)
        && sfKeyboard_isKeyPressed(sfKeySpace)){
        prof_d(all, e);
        starter(all, e);
    }
}
