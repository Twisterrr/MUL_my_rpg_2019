/*
** EPITECH PROJECT, 2020
** pnj_one
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pnj_one(all *all, sfEvent e)
{
    int i = 0;
    while (sfRenderWindow_isOpen(all->w)) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
        sfText_setString(all->pnj_one->text->txt, \
        all->pnj_one->text->text[i]);
        sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
        sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
        sfRenderWindow_display(all->w);
        text_quit(all, e);
        sfSleep((sfMilliseconds(90)));
        if (sfKeyboard_isKeyPressed(sfKeySpace)) i++;
        sfSleep((sfMilliseconds(90)));
        if (i == all->pnj_one->text->nb_text) break;
    }
}

void speak_pnj_one(all *all, sfFloatRect pers, sfFloatRect new)
{
    if (all->grade == 0) {
        sfEvent e;
        init_text_pnj_one(all->pnj_one->text);
        if (sfFloatRect_intersects(&pers, \
            &all->map[1]->obstacle[13]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace) \
            && all->grade == 0) {
            pnj_one(all, e);
            if (fight_f(all, 5) == 1)
                all->grade = 1;
        }
    }
}
