/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_all
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void six_init_all(all *all)
{
    all->inv_pv = malloc(sizeof(int *) * 5);
    all->inv_pv[0] = init_inv_pv();
    all->inv_pv[1] = init_inv_pv_two();
    all->inv_pv[2] = init_inv_pv_three();
    all->inv_pv[3] = init_inv_pv_four();
    all->inv_pv[4] = init_inv_pv_five();
    all->inv_pv[5] = init_inv_pv_six();
    all->inv_bar_c = malloc(sizeof(int *) * 5);
    all->inv_bar_c[0] = init_inv_c_one();
    all->inv_bar_c[1] = init_inv_c_two();
    all->inv_bar_c[2] = init_inv_c_three();
    all->inv_bar_c[3] = init_inv_c_four();
    all->inv_bar_c[4] = init_inv_c_five();
    all->inv_bar_c[5] = init_inv_c_six();
}

void seven_init_all(all *all)
{
    all->anim_att = malloc(sizeof(struct anim_s));
    all->pokeball = init_pokeball();
    all->pok = -1;
    all->help_char = init_help_char();
    all->help_fight = init_help_fight();
    all->help_map = init_help_map();
    all->starter = starter_f();
    all->pers = init_pers();
    all->option = init_option();
    all->cursor = init_cursor();
}
