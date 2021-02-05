/*
** EPITECH PROJECT, 2020
** pikachu
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void att_pikachu(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Pikachu use Thunder");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Pikachu use Volt Tackle");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Pikachu use Quick Attack");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Pikachu use Surf");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Pikachu appeared");
}

void att_staraptor(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Staraptor use Brave Bird");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Staraptor use Close Combat");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Staraptor use Quick Attack");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Staraptor use Fly");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Staraptor appeared");
}

void name_att_staraptor(all *all, int pok, int i)
{
    if (pok == 6)
        att_staraptor(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}

void att_milotic(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Milotic use Hydro Pump");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Milotic use Blizard");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Milotic use Dragon Pulse");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Milotic use Water Pulse");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Milotic appeared");
}

void name_att_milotic(all *all, int pok, int i)
{
    if (pok == 7)
        att_milotic(all, i);
    sfRenderWindow_drawText(all->w, all->pnj_one->text->txt, NULL);
}
