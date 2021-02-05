/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** hover_option
*/

#include "../../../../include/rpg.h"
#include "../../../../include/struct.h"

void more_hover(opt *opt, sfRenderWindow *w, sfVector2i m)
{
    if ((m.x >= 855 && m.x <= 1255) && (m.y >= 555 && m.y <= 655)) {
        hover_one(opt->up_sound, 370, 560);
    } else
        hover_two(opt->up_sound, 370, 550);
    if ((m.x >= 1355 && m.x <= 1755) && (m.y >= 555 && m.y <= 655)) {
        hover_one(opt->down_sound, 370, 560);
    } else
        hover_two(opt->down_sound, 370, 550);
    if ((m.x >= 855 && m.x <= 1255) && (m.y >= 700 && m.y <= 800)) {
        hover_one(opt->high_res, 370, 710);
    } else
        hover_two(opt->high_res, 370, 700);
    if ((m.x >= 1355 && m.x <= 1755) && (m.y >= 700 && m.y <= 800)) {
        hover_one(opt->low_res, 370, 710);
    } else
        hover_two(opt->low_res, 370, 700);
}

void hover_option(opt *opt, sfRenderWindow *w)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(w);

    if ((m.x >= 0 && m.x <= 410) && (m.y >= 900 && m.y <= 1000)) {
        hover_one(opt->back, 370, 910);
    } else
        hover_two(opt->back, 370, 900);
    if ((m.x >= 1355 && m.x <= 1755) && (m.y >= 255 && m.y <= 355)) {
        hover_one(opt->down_frame_limit, 370, 260);
    } else
        hover_two(opt->down_frame_limit, 370, 250);
    if ((m.x >= 855 && m.x <= 1255) && (m.y >= 255 && m.y <= 355)) {
        hover_one(opt->up_frame_limit, 370, 260);
    } else
        hover_two(opt->up_frame_limit, 370, 250);
    more_hover(opt, w, m);
}