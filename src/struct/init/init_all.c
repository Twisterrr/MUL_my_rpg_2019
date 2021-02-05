/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_all
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void five_init_all(all *all)
{
    all->catch_pok = catch_init();
    all->hydro_pump = init_hydro_pump();
    all->catch_button = init_board_pokeball();
    all->inv_pok = init_inv_pok();
    all->inv_pok_board = init_inv_pok_board();
    all->inv_bar = malloc(sizeof(int *) * 4);
    all->inv_bar[0] = init_inv_bar_one();
    all->inv_bar[1] = init_inv_bar_two();
    all->inv_bar[2] = init_inv_bar_three();
    all->inv_bar[3] = init_inv_bar_four();
    all->inv_bar[4] = init_inv_bar_five();
    all->logo_pok = malloc(sizeof(int *) * 5);
    all->logo_pok[0] = logo_pok();
    all->logo_pok[1] = logo_pok_two();
    all->logo_pok[2] = logo_pok_three();
    all->logo_pok[3] = logo_pok_four();
    all->logo_pok[4] = logo_pok_five();
    all->logo_pok[5] = logo_pok_six();
}

void fourth_init_all(all *all)
{
    all->name_pok = init_name_pok();
    all->name_wild_pok = init_name_wild_pok();
    all->name_att_one = init_name_att_one();
    all->name_att_two = init_name_att_two();
    all->name_att_three = init_name_att_three();
    all->name_att_four = init_name_att_four();
    all->map[3] = map4_init();
    all->damien = init_damien();
    all->damien->text = init_text(8);
    all->lose = init_lose();
    all->win = init_win();
    all->credit = init_credits();
    all->our_inv_pok = malloc(sizeof(int *) * 6);
    all->our_inv_pok[0] = -1;
    all->our_inv_pok[1] = -1;
    all->our_inv_pok[2] = -1;
    all->our_inv_pok[3] = -1;
    all->our_inv_pok[4] = -1;
    all->our_inv_pok[5] = -1;
    all->our_inv_pok[6] = -1;
}

void thrid_init_all(all *all)
{
    all->pokemon = malloc(sizeof(pokemon_t *) * 8);
    all->our_pok = malloc(sizeof(pokemon_t *) * 8);
    all->pokemon[0] = init_torterra();
    all->our_pok[0] = init_our_torterra(all);
    all->pokemon[1] = init_empoleon();
    all->our_pok[1] = init_our_empoleon(all);
    all->pokemon[2] = init_infernape();
    all->our_pok[2] = init_our_infernape(all);
    all->pokemon[3] = init_garchomp();
    all->our_pok[3] = init_our_garchomp(all);
    all->pokemon[4] = init_arcanine();
    all->our_pok[4] = init_our_arcanine(all);
    all->pokemon[5] = init_pikachu();
    all->pokemon[6] = init_staraptor();
    all->our_pok[5] = init_our_pikachu(all);
    all->our_pok[6] = init_our_staraptor(all);
    all->our_pok[7] = init_our_milotic(all);
    all->pokemon[7] = init_milotic();
    all->our_pok[8] = init_our_gliscor(all);
    all->pokemon[8] = init_gliscor();
}

void second_init_all(all *all)
{
    all->pause = init_pause();
    all->fight = init_fight();
    all->dresseur = init_dresseur();
    all->pnj_one = init_pnj_one();
    all->pnj_two = init_pnj_two();
    all->pnj_three = init_pnj_three();
    all->pnj_four = init_pnj_four();
    all->pnj_one->text = init_text(6);
    all->pnj_two->text = init_text(7);
    all->pnj_three->text = init_text(7);
    all->pnj_four->text = init_text(8);
    all->board1 = init_board1();
    all->board2 = init_board2();
    all->board3 = init_board3();
    all->board4 = init_board4();
    all->bar = init_bar();
    all->sign = init_sign();
    all->grade = 0;
    all->cinematic = init_cinematic();
    thrid_init_all(all);
}

all *init_all(void)
{
    all *all = malloc(sizeof(*all));
    all->frame_limit = 64;
    all->time.microseconds = 99900;
    all->w = create_window("Pokemon Generations", 1080, 1920, 7);
    all->volume = 100;
    all->back = 0;
    all->menu = init_menu();
    all->map[0] = map1_init();
    all->map[1] = map2_init();
    all->map[2] = map3_init();
    all->prof = init_prof();
    all->prof->text = init_text(6);
    second_init_all(all);
    all->board_quit = init_board_quit();
    fourth_init_all(all);
    five_init_all(all);
    six_init_all(all);
    seven_init_all(all);
    return (all);
}
