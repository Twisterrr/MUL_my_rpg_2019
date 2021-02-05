/*
** EPITECH PROJECT, 2020
** pnj4
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void pnj_four_one(all *all, sfEvent e)
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

int fight_pnj_four(all *all, int i)
{
    if (!(fight_f(all, 4) == 1))
        return 0;
    if (!(fight_f(all, 3) == 1))
        return 0;
    return 1;
}

void pnj_four_two(all *all, sfEvent e, int i)
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
        if (i == 5)
            if (fight_pnj_four(all, i)) {
                all->grade = 4;
                i++;
            }
            else
                break;
        if (i == 6) break;
    }
}

void pnj_four_three(all *all, sfEvent e)
{
    int i = 5;
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
        if (i == 8) break;
    }
}

void speak_pnj_four(all *all, sfFloatRect pers, sfFloatRect new, int grade)
{
    sfEvent e;
    init_text_pnj_four(all->pnj_one->text);
    if (grade < 3)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[16]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_four_one(all, e);
    if (grade == 3)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[16]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace)) {
            int i = 2;
            pnj_four_two(all, e, i);
        }
    if (grade >= 4)
        if (sfFloatRect_intersects(&pers, \
            &all->map[2]->obstacle[16]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_four_three(all, e);
}
