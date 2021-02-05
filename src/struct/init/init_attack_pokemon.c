/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_utils_pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

attack_t *att(int name, int type, int puissance, int type_att)
{
    attack_t *att = malloc(sizeof(attack_t));
    att->name = name;
    att->type = type;
    att->puissance = puissance;
    att->type_att = type_att;
    return att;
}

attack_t **pikachu_att(pokemon_t *pers)
{
    pers->attack = malloc(sizeof(attack_t *) * 4);
    pers->attack[0] = att(2, ECLAIRE, 110, 1);
    pers->attack[1] = att(2, ECLAIRE, 120, 0);
    pers->attack[2] = att(2, NORMALE, 80, 0);
    pers->attack[3] = att(2, EAU, 90, 1);
    return pers->attack;
}

attack_t **arcanine_att(pokemon_t *pers)
{
    pers->attack = malloc(sizeof(attack_t *) * 4);
    pers->attack[0] = att(2, FEU, 90, 1);
    pers->attack[1] = att(2, ECLAIRE, 65, 0);
    pers->attack[2] = att(2, NORMALE, 80, 0);
    pers->attack[3] = att(2, SOL, 60, 1);
    return pers->attack;
}

attack_t **empoleon_att(pokemon_t *pers)
{
    pers->attack = malloc(sizeof(attack_t *) * 4);
    pers->attack[0] = att(2, EAU, 120, 1);
    pers->attack[1] = att(2, ACIER, 90, 0);
    pers->attack[2] = att(2, GLACE, 120, 1);
    pers->attack[3] = att(2, VOL, 40, 0);
    return pers->attack;
}

attack_t **garchomp_att(pokemon_t *pers)
{
    pers->attack = malloc(sizeof(attack_t *) * 4);
    pers->attack[0] = att(0, SOL, 100, 0);
    pers->attack[1] = att(2, DRAGON, 80, 0);
    pers->attack[2] = att(2, FEU, 90, 1);
    pers->attack[3] = att(2, ROCHE, 100, 0);
    return pers->attack;
}
