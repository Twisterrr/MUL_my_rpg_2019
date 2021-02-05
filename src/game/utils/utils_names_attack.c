/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** utils_names_attack
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void what_att_for_our_pok(all *all, int our)
{
    if (our == 0)
        name_pok_torterra_att(all, our);
    if (our == 1)
        name_pok_empoleon_att(all, our);
    if (our == 2)
        name_pok_infernape_att(all, our);
    if (our == 3)
        name_pok_garchomp_att(all, our);
    if (our == 4)
        name_pok_arcanine_att(all, our);
    if (our == 5)
        name_pok_pikachu_att(all, our);
    if (our == 6)
        name_pok_staraptor_att(all, our);
    if (our == 7)
        name_pok_milotic_att(all, our);
    if (our == 8)
        name_pok_gliscor_att(all, our);
}
