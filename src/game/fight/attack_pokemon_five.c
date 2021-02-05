/*
** EPITECH PROJECT, 2020
** attaques
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void att_gliscor(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Gliscor use Earthquake");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Gliscor use Fly");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Gliscor use Night Slash");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Gliscor use Thunder Fang");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Gliscor appeared");
}

void name_att_gliscor(all *all, int pok, int i)
{
    if (pok == 8)
        att_gliscor(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}
