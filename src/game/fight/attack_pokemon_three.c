/*
** EPITECH PROJECT, 2020
** fight
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void att_empoleon(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Empoleon use Hydro Pump");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Empoleon use Iron Head");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Empoleon use Blizzard");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Empoleon use Peck");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Empoleon appeared");
}

void att_infernape(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Infernape use Fire Blast");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Infernape use Close Combat");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Infernape use Fire Punch");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Infernape use Dig");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Infernape appeared");
}

void att_torterra(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Torterra use Leaf Storm");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Torterra use Earthquake");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Torterra use Crunch");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Torterra use Stone Edge");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Torterra appeared");
}

void att_garchomp(all *all, int i)
{
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Garchomp use Dragon Claw");
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Garchomp use Earthquake");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Garchomp use Flamethrower");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Garchomp use Stone Edge");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Garchomp appeared");
}

void att_arcanine(all *all, int i)
{
    if (i == 0)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Arcanine use Flamethrower");
    if (i == 1)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Arcanine use Thunder Fang");
    if (i == 2)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Arcanine use Extreme Speed");
    if (i == 3)
        sfText_setString(all->pnj_one->text->txt, \
        "\n Wild Arcanine use Hidden Power");
    if (i == 4)
        sfText_setString(all->pnj_one->text->txt, \
        "\n   OH ! A Arcanine appeared");
}
