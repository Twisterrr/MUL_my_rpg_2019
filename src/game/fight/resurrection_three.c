/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** resurrection_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

float res_gliscor(all *all, int attack)
{
    if (attack == COMBAT) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == EAU) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == GLACE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 4;
    }
    if (attack == SOL || attack == ECLAIRE)
        return 0;
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}
