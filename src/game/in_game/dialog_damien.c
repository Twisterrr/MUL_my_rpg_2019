/*
** EPITECH PROJECT, 2020
** pnj_d
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int fight_d(all *all, int i)
{
    if (!(fight_f(all, 2) == 1))
        return 0;
    if (!(fight_f(all, 6) == 1))
        return 0;
    if (!(fight_f(all, 7) == 1))
        return 0;
    if (!(fight_f(all, 8) == 1))
        return 0;
    return 1;
}

void pnj_d_one(all *all, int i, sfEvent e)
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
        if (i == 6)
            if (fight_d(all, i)) {
                all->grade = 5;
                i++;
            }
            else
                break;
        if (i == 8) break;
    }
}

void pnj_d_two(all *all, sfEvent e)
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

void speak_pnj_d(all *all, sfFloatRect pers, sfFloatRect new, int grade)
{
    sfEvent e;
    init_text_pnj_damien(all->pnj_one->text);
    if (grade == 4)
        if (sfFloatRect_intersects(&pers, \
            &all->map[3]->obstacle[0]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace)) {
            int i = 0;
            pnj_d_one(all, i, e);
        }
    if (grade != 4)
        if (sfFloatRect_intersects(&pers, \
            &all->map[3]->obstacle[0]->rect, &new)
            && sfKeyboard_isKeyPressed(sfKeySpace))
            pnj_d_two(all, e);
    if (grade == 5)
        my_win(all);
}
