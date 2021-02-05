/*
** EPITECH PROJECT, 2020
** name_att and pok
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void name_pok_gliscor_att(all *all, int pok)
{
    if (pok == 8) {
        sfText_setString(all->name_att_one->txt, "Earthquake");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Fly");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Night Slash");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Thunder Fang");
        draw_button( all->name_att_four, all->w);
    }
}
