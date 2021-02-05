/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_pos_txt
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

pos_txt *init_pos_txt(sfVector2f pos, sfText *text)
{
    pos_txt *pos_txt = malloc(sizeof(*pos_txt));
    pos_txt->pos = pos;
    pos_txt->txt = text;
    return (pos_txt);
}