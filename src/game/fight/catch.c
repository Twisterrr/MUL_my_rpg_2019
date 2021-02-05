/*
** EPITECH PROJECT, 2020
** catch
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void draw_catch(all *all, int pok, int our)
{
    sfRenderWindow_clear(all->w, sfWhite);
    sfRenderWindow_drawSprite(all->w, all->fight->sprite_f, NULL);
    sfRenderWindow_drawSprite(all->w, all->pnj_one->text->sprite, NULL);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
    sfRenderWindow_drawRectangleShape(all->w, all->pokemon[pok]->rect, NULL);
    draw_board(all, our);
    sfRenderWindow_drawSprite(all->w, \
    all->board_quit->sprite_f, NULL);
    name_wild_pok(all, pok);
    what_att_for_our_pok(all, our);
    sfRenderWindow_drawSprite(all->w, \
    all->catch_pok->sprite_f, NULL);
}

int percent_of_catch(all *all, int pok)
{
    float a = all->pokemon[pok]->size.x / 245 * 100;
    int p;
    if (a <= 25)
        p = 75;
    else if (a > 25 && a <= 50)
        p = 50;
    else
        p = 25;
    return p;
}

int catch_anim(all *all, int pok, int our)
{
    int r = rand() % 100;
    while (sfRenderWindow_isOpen(all->w)) {
        draw_catch(all, pok, our);
        all->catch_pok->time = sfClock_getElapsedTime(all->catch_pok->cl);
        if (sfClock_getElapsedTime(all->catch_pok->cl).microseconds    \
            >= 1000000/ 3) {
            if (r <= percent_of_catch(all, pok))
                if (all->catch_pok->ar.left >= 176)
                    return 1;
            if (!(r <= percent_of_catch(all, pok)))
                if (all->catch_pok->ar.left >= 16 * 3)
                    return 0;
            all->catch_pok->ar.left += 16;
            sfClock_restart(all->catch_pok->cl);
        }
        sfSprite_setTextureRect(all->catch_pok->sprite_f, all->catch_pok->ar);
        sfRenderWindow_display(all->w);
    }
    return 1;
}

int fail_catch(all *all, int our, int pok)
{
    int i = rand() % 4;
    wait_opponent(all, pok, our, i);
    attack_opponent(all, pok, our, i);
    color_pv(all->our_pok[our]);
    if (all->our_pok[our]->size.x <= 0)
        return 2;
    return 0;
}

int catch(all *all, int pok, int our)
{
    int i = 0;
    all->catch_pok->ar.left = -16;
    for (; all->our_inv_pok[i] != -1; i++)
        if (i >= 5) return 0;
    if (catch_fight(all)) {
        if (!(catch_anim(all, pok, our)))
            return fail_catch(all, our, pok);
        int p = 1;
        for (; all->our_inv_pok[p] != -1 && p != 6; p++);
        all->our_inv_pok[p] = pok;
        sfSprite_setTextureRect(all->catch_pok->sprite_f, all->catch_pok->ar);
        return 1;
    }
    return 0;
}
