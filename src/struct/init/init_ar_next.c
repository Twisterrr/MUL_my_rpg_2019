/*
** EPITECH PROJECT, 2020
** logo_pok
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

sfIntRect init_empoleon_ar(pokemon_t *pers)
{
    pers->ar_two.left = 146;
    pers->ar_two.top = 665;
    pers->ar_two.width = 40;
    pers->ar_two.height = 40;
    return pers->ar_two;
}

sfIntRect init_staraptor_ar(pokemon_t *pers)
{
    pers->ar_two.left = 262;
    pers->ar_two.top = 665;
    pers->ar_two.width = 40;
    pers->ar_two.height = 40;
    return pers->ar_two;
}

sfIntRect init_milotic_ar(pokemon_t *pers)
{
    pers->ar_two.left = 420;
    pers->ar_two.top = 590;
    pers->ar_two.width = 40;
    pers->ar_two.height = 40;
    return pers->ar_two;
}

sfIntRect init_gliscor_ar(pokemon_t *pers)
{
    pers->ar_two.left = 114;
    pers->ar_two.top = 780;
    pers->ar_two.width = 40;
    pers->ar_two.height = 40;
    return pers->ar_two;
}
