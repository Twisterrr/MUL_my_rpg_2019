/*
** EPITECH PROJECT, 2020
** board
** File description:
** pokemon
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

game_t **init_board4(void)
{
    all *pers = malloc(sizeof(struct all));
    pers->board1 = malloc(sizeof(game_t *) * 17);
    pers->board1[0] = init_board_sol(4);
    pers->board1[1] = init_board_eau(4);
    pers->board1[2] = init_board_acier(4);
    pers->board1[3] = init_board_ice(4);
    pers->board1[4] = init_board_vol(4);
    pers->board1[5] = init_board_feu(4);
    pers->board1[6] = init_board_fight(4);
    pers->board1[7] = init_board_grass(4);
    pers->board1[8] = init_board_dark(4);
    pers->board1[9] = init_board_rock(4);
    pers->board1[10] = init_board_dragon(4);
    pers->board1[11] = init_board_eclair(4);
    pers->board1[12] = init_board_normal(4);
    return pers->board1;
}

game_t **init_board3(void)
{
    all *pers = malloc(sizeof(struct all));
    pers->board1 = malloc(sizeof(game_t *) * 17);
    pers->board1[0] = init_board_sol(3);
    pers->board1[1] = init_board_eau(3);
    pers->board1[2] = init_board_acier(3);
    pers->board1[3] = init_board_ice(3);
    pers->board1[4] = init_board_vol(3);
    pers->board1[5] = init_board_feu(3);
    pers->board1[6] = init_board_fight(3);
    pers->board1[7] = init_board_grass(3);
    pers->board1[8] = init_board_dark(3);
    pers->board1[9] = init_board_rock(3);
    pers->board1[10] = init_board_dragon(3);
    pers->board1[11] = init_board_eclair(3);
    pers->board1[12] = init_board_normal(3);
    return pers->board1;
}

game_t **init_board2(void)
{
    all *pers = malloc(sizeof(struct all));
    pers->board1 = malloc(sizeof(game_t *) * 17);
    pers->board1[0] = init_board_sol(2);
    pers->board1[1] = init_board_eau(2);
    pers->board1[2] = init_board_acier(2);
    pers->board1[3] = init_board_ice(2);
    pers->board1[4] = init_board_vol(2);
    pers->board1[5] = init_board_feu(2);
    pers->board1[6] = init_board_fight(2);
    pers->board1[7] = init_board_grass(2);
    pers->board1[8] = init_board_dark(2);
    pers->board1[9] = init_board_rock(2);
    pers->board1[10] = init_board_dragon(2);
    pers->board1[11] = init_board_eclair(2);
    pers->board1[12] = init_board_normal(2);
    return pers->board1;
}

game_t **init_board1(void)
{
    all *pers = malloc(sizeof(struct all));
    pers->board1 = malloc(sizeof(game_t *) * 17);
    pers->board1[0] = init_board_sol(1);
    pers->board1[1] = init_board_eau(1);
    pers->board1[2] = init_board_acier(1);
    pers->board1[3] = init_board_ice(1);
    pers->board1[4] = init_board_vol(1);
    pers->board1[5] = init_board_feu(1);
    pers->board1[6] = init_board_fight(1);
    pers->board1[7] = init_board_grass(1);
    pers->board1[8] = init_board_dark(1);
    pers->board1[9] = init_board_rock(1);
    pers->board1[10] = init_board_dragon(1);
    pers->board1[11] = init_board_eclair(1);
    pers->board1[12] = init_board_normal(1);
    return pers->board1;
}