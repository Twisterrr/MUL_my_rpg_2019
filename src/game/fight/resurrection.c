/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** resurrection
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

float res_torterra(all *all, int attack)
{
    if (attack == FEU || attack == VOL) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == SOL || attack == ROCHE) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
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

float res_milotic(all *all, int attack)
{
    if (attack == ECLAIRE || attack == PLANTE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == EAU || attack == GLACE || attack == ACIER) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res_staraptor(all *all, int attack)
{
    if (attack == ECLAIRE || attack == ROCHE) {
        sfText_setString(all->pnj_one->text->txt, "\n   It's super effective");
        return 2;
    }
    if (attack == PLANTE) {
        sfText_setString(all->pnj_one->text->txt, \
        "\n   It's not super effective");
        return 0.5;
    }
    if (attack == SOL)
        return 0;
    sfText_setString(all->pnj_one->text->txt, " ");
    return 1;
}

float res(all *pokemon, int attack, int pok)
{
    if (pok == 0)
        return res_torterra(pokemon, attack);
    if (pok == 1)
        return res_empoleon(pokemon, attack);
    if (pok == 2)
        return res_infernape(pokemon, attack);
    if (pok == 3)
        return res_garchomp(pokemon, attack);
    if (pok == 4)
        return res_arcanine(pokemon, attack);
    if (pok == 5)
        return res_pikachu(pokemon, attack);
    if (pok == 6)
        return res_staraptor(pokemon, attack);
    if (pok == 7)
        return res_milotic(pokemon, attack);
    if (pok == 8)
        return res_gliscor(pokemon, attack);
    return 1;
}
