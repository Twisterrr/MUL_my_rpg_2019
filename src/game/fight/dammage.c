/*
** EPITECH PROJECT, 2020
** fight
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

float nominator(int att, attack_t *attack)
{
    int puissance = attack->puissance;
    float nom = 22.0 * att * puissance;
    return nom;
}

float denominator(int def_adv)
{
    return (def_adv * 50);
}
