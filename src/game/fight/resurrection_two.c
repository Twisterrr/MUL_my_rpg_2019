/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** resurrection_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

float res_arcanine(all *all, int attack)
{
    if (attack == FEU || attack == PLANTE || \
    attack == GLACE || attack == ACIER) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == EAU || attack == SOL || attack == ROCHE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res_pikachu(all *all, int attack)
{
    if (attack == ECLAIRE) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == SOL || attack == ROCHE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res_empoleon(all *all, int attack)
{
    if (attack == GLACE || attack == ACIER) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.25;
    }
    if (attack == VOL || attack == ROCHE || \
    attack == TENEBRE || attack == DRAGON || attack == EAU) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == COMBAT || attack == SOL) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res_garchomp(all *all, int attack)
{
    if (attack == FEU || attack == ROCHE) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == DRAGON) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == GLACE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 4;
    }
    if (attack == ECLAIRE)
        return 0;
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res_infernape(all *all, int attack)
{
    if (attack == EAU || attack == SOL || attack == VOL) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == FEU || attack == GLACE || attack == ACIER) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}