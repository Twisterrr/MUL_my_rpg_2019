/*
** EPITECH PROJECT, 2020
** pnj_3
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pnj_three_one(all *all, sfEvent e)
{
    int i = 0;
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
        if (i == 2) break;
    }
}

void pnj_three_two(all *all, sfEvent e, int i)
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
        if (i == 4)
            if (fight_f(all, 1) == 1) {
                all->grade = 3;
                i++;
            }
            else
                break;
        if (i == 6) break;
    }
}

void pnj_three_three(all *all, sfEvent e)
{
    int i = 4;
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

void speak_pnj_three(all *all, sfFloatRect pers, sfFloatRect new, int grade)
{
    sfEvent e;
    init_text_pnj_tree(all->pnj_one->text);
    if (grade == 1 || grade == 0)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[15]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_three_one(all, e);
    if (grade == 2) {
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[15]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace)) {
            int i = 2;
            pnj_three_two(all, e, i);
        }
    }
    if (grade >= 3)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[15]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_three_three(all, e);
}
