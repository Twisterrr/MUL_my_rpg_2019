/*
** EPITECH PROJECT, 2020
** pokemon
** File description:
** pnj_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pnj_two_one(all *all, int i, sfEvent e)
{
    while (sfRenderWindow_isOpen(all->w)) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
        sfText_setString(all->pnj_one->text->txt, \
        all->pnj_one->text->text[i]);
        d_text(all);
        text_quit(all, e);
        sfSleep((sfMilliseconds(90)));
        if (sfKeyboard_isKeyPressed(sfKeySpace)) i++;
        sfSleep((sfMilliseconds(90)));
        if (i == 3)
            if (fight_f(all, 0) == 1) {
                all->grade = 2;
                i++;
            }
            else
                break;
        if (i == 6) break;
    }
}

void pnj_two_two(all *all, sfEvent e)
{
    int i = 6;
    while (sfRenderWindow_isOpen(all->w)) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
        sfText_setString(all->pnj_one->text->txt, \
        all->pnj_one->text->text[i]);
        sfRenderWindow_drawSprite(all->w, \
        all->pnj_one->text->sprite, NULL);
        sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
        sfRenderWindow_display(all->w);
        text_quit(all, e);
        sfSleep((sfMilliseconds(90)));
        if (sfKeyboard_isKeyPressed(sfKeySpace)) i++;
        sfSleep((sfMilliseconds(90)));
        if (i == 7) break;
    }
}

void pnj_two_zero(all *all, sfEvent e)
{
    while (sfRenderWindow_isOpen(all->w)) {
        if (sfKeyboard_isKeyPressed(sfKeyQ)) break;
        sfText_setString(all->pnj_one->text->txt, \
        "\n   You must beat Manon\n   at the forest");
        sfRenderWindow_drawSprite(all->w, \
        all->pnj_one->text->sprite, NULL);
        sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
        sfRenderWindow_display(all->w);
        text_quit(all, e);
        if (sfKeyboard_isKeyPressed(sfKeySpace)) break;
        sfSleep((sfMilliseconds(90)));
    }
}

void speak_pnj_two(all *all, sfFloatRect pers, sfFloatRect new, int grade)
{
    sfEvent e;
    init_text_pnj_two(all->pnj_one->text);
    if (grade == 0)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[12]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_two_zero(all, e);
    if (grade == 1)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[12]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace)) {
            int i = 0;
            pnj_two_one(all, i, e);
        }
    if (grade != 0)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[12]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_two_two(all, e);
}
