/*
** EPITECH PROJECT, 2020
** name_att and pok
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void name_pok_empoleon_att(all *all, int pok)
{
    if (pok == 1) {
        sfText_setString(all->name_att_one->txt, "Hydro Pump");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Iron Head");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Blizzard");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Peck");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_staraptor_att(all *all, int pok)
{
    if (pok == 6) {
        sfText_setString(all->name_att_one->txt, "Brave Bird");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Close Combat");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Quick Attack");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Fly");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_infernape_att(all *all, int pok)
{
    if (pok == 2) {
        sfText_setString(all->name_att_one->txt, "Fire Blast");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Close Combat");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Fire Punch");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Dig");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_torterra_att(all *all, int pok)
{
    if (pok == 0) {
        sfText_setString(all->name_att_one->txt, "Leaf Storm");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Earthquake");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Crunch");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Stone Edge");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_garchomp_att(all *all, int pok)
{
    if (pok == 3) {
        sfText_setString(all->name_att_one->txt, "Earthquake");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Dragon Claw");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Flamethrower");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Stone Edge");
        draw_button( all->name_att_four, all->w);
    }
}
