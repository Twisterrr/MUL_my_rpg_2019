/*
** EPITECH PROJECT, 2020
** name_att and pok
** File description:
** rpg
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void name_wild_pok(all *all, int pok)
{
    if (pok == 0) {
        sfText_setString(all->name_wild_pok->txt, "Torterra"); }
    if (pok == 1) {
        sfText_setString(all->name_wild_pok->txt, "Empoleon"); }
    if (pok == 2) {
        sfText_setString(all->name_wild_pok->txt, "Infernape"); }
    if (pok == 3) {
        sfText_setString(all->name_wild_pok->txt, "Garchomp"); }
    if (pok == 4) {
        sfText_setString(all->name_wild_pok->txt, "Arcanine"); }
    if (pok == 5) {
        sfText_setString(all->name_wild_pok->txt, "Pikachu"); }
    if (pok == 6)
        sfText_setString(all->name_wild_pok->txt, "Staraptor");
    if (pok == 7)
        sfText_setString(all->name_wild_pok->txt, "Milotic");
    if (pok == 8)
        sfText_setString(all->name_wild_pok->txt, "Gliscor");
    draw_button( all->name_wild_pok, all->w);
}

void name_our_pok(all *all, int pok)
{
    if (pok == 0) {
        sfText_setString(all->name_pok->txt, "Torterra");}
    if (pok == 1) {
        sfText_setString(all->name_pok->txt, "Empoleon"); }
    if (pok == 2) {
        sfText_setString(all->name_pok->txt, "Infernape"); }
    if (pok == 3) {
        sfText_setString(all->name_pok->txt, "Garchomp"); }
    if (pok == 4) {
        sfText_setString(all->name_pok->txt, "Arcanine"); }
    if (pok == 5)  {
        sfText_setString(all->name_pok->txt, "Pikachu"); }
    if (pok == 6) {
        sfText_setString(all->name_pok->txt, "Staraptor"); }
    if (pok == 7) {
        sfText_setString(all->name_pok->txt, "Milotic"); }
    if (pok == 8) {
        sfText_setString(all->name_pok->txt, "Gliscor"); }
    draw_button( all->name_pok, all->w);
}

void name_pok_arcanine_att(all *all, int pok)
{
    if (pok == 4) {
        sfText_setString(all->name_att_one->txt, "Flamethrower");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Thunder Fang");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Extreme Speed");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Hidden Power");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_pikachu_att(all *all, int pok)
{
    if (pok == 5) {
        sfText_setString(all->name_att_one->txt, "Thunder");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Volt Tackle");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Quick Attack");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Surf");
        draw_button( all->name_att_four, all->w);
    }
}

void name_pok_milotic_att(all *all, int pok)
{
    if (pok == 7) {
        sfText_setString(all->name_att_one->txt, "Hydro Pump");
        draw_button( all->name_att_one, all->w);
        sfText_setString(all->name_att_two->txt, "Blizard");
        draw_button( all->name_att_two, all->w);
        sfText_setString(all->name_att_three->txt, "Dragon Pulse");
        draw_button( all->name_att_three, all->w);
        sfText_setString(all->name_att_four->txt, "Water Pulse");
        draw_button( all->name_att_four, all->w);
    }
}
