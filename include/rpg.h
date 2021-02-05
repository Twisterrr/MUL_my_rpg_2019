/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rpg
*/

#ifndef RPG_H_
#define RPG_H_
#include "struct.h"

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

#define ABS(x, y) ((x - y) > 0 ? (x - y) : (y - x))

typedef struct flag
{
    char c;
    int (*f)(va_list*);
}flag;

int main(int ac, char **av);

/// LIB / PRINTF ///
void my_putchar(int c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_printf(char *str, ...);
int my_put_nbr_abs(int nb);
int my_putnbr_base(int nbr, char const *base);
int my_putstr_wrap(va_list *arg);
int my_putchar_wrap(va_list *arg);
int my_putnbr_b_wrap(va_list *arg);
int my_putnbr_o_wrap(va_list *arg);
int my_putnbr_x_wrap(va_list *arg);
int my_putnbr_big_x_wrap(va_list *arg);
int my_put_nbr_wrap(va_list *arg);
int my_put_nbr_abs_wrap(va_list *arg);
int my_put_percent(va_list *arg);
int my_getnbr(char const *str);
char *int_to_str(int nb, char *str);

/// CSFML LIB ///
sfMusic *create_music(char *name, int loop, int play);
sfSprite *create_sprite(char *texture);
sfText *create_txt(int size, sfFont *font, sfColor color, char *string);
sfRenderWindow *create_window(char *name, int height, int width, int style);
void draw_button(button *button, sfRenderWindow *w);
void draw_pos_txt(pos_txt *pos_txt, sfRenderWindow *w);


/// Menu ///
void my_menu(all *all);
void event_menu(menu *menu, sfRenderWindow *w, all *all);
void draw_menu(menu *menu, sfRenderWindow *w, cursor *cur);
void draw_cursor(cursor *cur, sfRenderWindow *w);
void draw_button_menu(menu *menu, sfRenderWindow *w);
void hover_menu(menu *menu, sfRenderWindow *w);
void hover_one(button *but, int one, int two);
void hover_two(button *but, int one, int two);
void pressed_quit(menu *menu, sfRenderWindow *w, all *all);
void pressed_option(menu *menu, sfRenderWindow *w, all *all);
void option(all *all);
void event_option(opt *opt, sfRenderWindow *w, all *all);
void pressed_back(opt *opt, sfRenderWindow *w, all *all);
void pressed_res(opt *opt, sfRenderWindow *w, all *all);
void pressed_frame(opt *opt, sfRenderWindow *w, all *all);
void pressed_sound(opt *opt, sfRenderWindow *w, all *all);
void draw_option(opt *opt, sfRenderWindow *w, cursor * cur);
void hover_option(opt *opt, sfRenderWindow *w);

/// Menu next ///
void my_menu_next(all *all);
void event_menu_next(menu *menu, sfRenderWindow *w, all *all);
void draw_menu_next(menu *menu, sfRenderWindow *w, cursor *cur);
void draw_button_menu_next(menu *menu, sfRenderWindow *w);
void help_menu(sfRenderWindow *w, all *all, help *help);
void draw_help(sfRenderWindow *w, help *help, cursor *cur);
void help_character(all *all);
void help_map(all *all);
void help_fight(all *all);
void my_cinema(all *all);

/// Game ///
void my_game(all *all);
void movement_player(all* all, sfFloatRect c, sfFloatRect boundingBox, \
sfBool intersect);
void text_quit(all *all, sfEvent e);
void movement_north(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all);
void movement_south(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all);
void movement_east(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all);
void movement_west(sfFloatRect c, sfFloatRect boundingBox, \
    sfBool intersect, all *all);
int mur(sfFloatRect c, sfFloatRect boundingBox, sfBool intersect);
bool inter(all *all, sfFloatRect *c);
void step_lay_above(all *all);
void step_obstacle(map_t *map);
void step_obstacle(map_t *map);
void starter(all *all, sfEvent e);
void speak_prof(all *all, sfFloatRect bb, sfFloatRect c);
void speak_pnj_one(all *all, sfFloatRect pers, sfFloatRect new);
void speak_pnj_three(all *all, sfFloatRect pers, sfFloatRect new, int grade);
void speak_pnj_four(all *all, sfFloatRect pers, sfFloatRect new, int grade);
void speak_pnj_d(all *all, sfFloatRect pers, sfFloatRect new, int grade);
void change_map1(all *all, sfFloatRect bb, sfFloatRect c);
void change_map3(all *all, sfFloatRect bb, sfFloatRect c);
void change_map4(all *all, sfFloatRect bb, sfFloatRect c);
void change_map(all *all, sfFloatRect bb, sfFloatRect c);
void all_movement_directions(all *all, int pos_x, int pos_y, int top);
void draw_game(all *all, sfRenderWindow *w);
level_t *level_f(level_t *level);
void event_game(all *all, sfBool intersect, \
                sfFloatRect c, sfFloatRect boundingBox);
sfFloatRect pers_rect(all *all);
void event_text(all *all, sfFloatRect c, sfFloatRect bb);
void map1e(all *all, sfFloatRect bb, sfFloatRect c);
void recovery(all *all);
void speak_pnj_two(all *all, sfFloatRect pers, sfFloatRect new, int grade);
void change_map(all *all, sfFloatRect bb, sfFloatRect c);
void close_game(all *all);
void draw_obstacles(all *all, map_t *map);
void my_lose(all *all);
void my_win(all *all);
void d_text(all *all);
int catch(all *all, int pok, int our);
void inv_pv_color(all *all, int i);
void draw_inventory_two(all *all, int i);

///pokemon///
void our_pok_move(all *all, int our);
void oponent(all *all, int pok);
void our_empoleon(all *all, int our);
void oponent_empoleon(all *all, int pok);
void our_infernape(all *all, int our);
void oponent_infernape(all *all, int pok);
void our_torterra(all *all, int our);
void oponent_torterra(all *all, int pok);
int fight(all *all, int comb, int nb_pok);
void pok_dresseur(all *all, int i);
void oponent_garchomp(all *all, int pok);
void our_garchomp(all *all, int our);
void oponent_arcanine(all *all, int pok);
void our_arcanine(all *all, int our);
void oponent_pikachu(all *all, int pok);
void our_pikachu(all *all, int our);
void color_pv(pokemon_t *pok);
void attack_our_pok(all *all, int pok, int our, int i);
void wait_opponent(all *all, int pok, int our, int i);
void name_att(all *all, int pok, int i);
void name_att_empoleon(all *all, int pok, int i);
void name_att_infernape(all *all, int pok, int i);
void name_att_torterra(all *all, int pok, int i);
void name_att_garchomp(all *all, int pok, int i);
void name_att_arcanine(all *all, int pok, int i);
void att_empoleon(all *all, int i);
void att_infernape(all *all, int i);
void att_torterra(all *all, int i);
void att_garchomp(all *all, int i);
void att_arcanine(all *all, int i);
void att_pikachu(all *all, int i);
int pok_fast(all *all, int pok, int our, int a);
int our_fast(all *all, int pok, int our, int a);
int mouse_att(all *all);
int fight_pokemon(all *all, int pok, int our, int a);
float res_empoleon(all *all, int attack);
float res_arcanine(all *all, int attack);
float res_pikachu(all *all, int attack);
float res_infernape(all *all, int attack);
float res(all *pokemon, int attack, int pok);
float res_garchomp(all *all, int attack);
void attack_opponent(all *all, int pok, int our, int i);
float degats(int att, attack_t *attack, int def_adv, \
pokemon_t *pokemon, int pok, all *all);
float nominator(int att, attack_t *attack);
float denominator(int def_adv);
int fight_game(all *all, int pok, int our, int i);
void fight_music(all *all, int pok);
void draw_fight(all *all, int our, int pok);
int fight_one(all *all, sfMusic *music, int pok, int fight_int);
int fight_destroy(all *all, sfMusic *music, int pok);
void fight_dresseur_talk(all *all, int our);
void fight_regroup(all *all, int i, int our, int pok);
int openent_physical(all *all, int our, int pok, int i);
int openent_spe(all *all, int our, int pok, int i);
int choose_infernape(all *all, sfEvent e, sfVector2i m);
int chosse_torterra(all *all, sfEvent e, sfVector2i m);
int choose_empoleon(all *all, sfEvent e, sfVector2i m);
int quit_fight(all *all);
void wait_opponent_three(all *all, int pok, int our);
void attack_our_pok_four(all *all, int pok, int our);
game_t *catch_init(void);
int fight_f(all *all, int nb_pok);
int fight_o(all *all, int pok, int fight_int);
void name_pok_staraptor_att(all *all, int pok);
void name_pok_garchomp_att(all *all, int pok);
void name_pok_arcanine_att(all *all, int pok);
void name_pok_pikachu_att(all *all, int pok);
void oponent_staraptor(all *all, int pok);
void our_staraptor(all *all, int our);
int catch_fight(all *all);
stat_t *staraptor_stat(void);
void init_staraptor_next(pokemon_t *pers);
pokemon_t *init_staraptor(void);
void init_our_staraptor_next(pokemon_t *pers);
pokemon_t *init_our_staraptor(all *all);
attack_t **staraptor_att(pokemon_t *pers);
void draw_board(all *all, int our);
int inventory_catch(all *all, int our, int pok);
int inv_button_fight(all *all);
int inv_quit_fight(all *all);
void name_att_staraptor(all *all, int pok, int i);
void name_att_milotic(all *all, int pok, int i);
void oponent_milotic(all *all, int pok);
void our_milotic(all *all, int our);
void name_pok_milotic_att(all *all, int pok);
void name_pok_gliscor_att(all *all, int pok);
void oponent_gliscor(all *all, int pok);
void name_att_gliscor(all *all, int pok, int i);
void our_gliscor(all *all, int our);
float res_gliscor(all *all, int attack);
void anim_att(all *all, int our, int pok, int i);

/// Pause ///
void draw_pause(sfRenderWindow *w, all *all);
void pressed_resume(sfRenderWindow *w, all *all);
void pressed_menu(sfRenderWindow *w, all *all);
void pressed_help(sfRenderWindow *w, all *all);
void pressed_pokemon(sfRenderWindow *w, all *all);
void pressed_option_pause(sfRenderWindow *w, all *all);
void pressed_quit_two(sfRenderWindow *w, all *all);
void pressed_pokemon(sfRenderWindow *w, all *all);

///Credits///
void pressed_credits(sfRenderWindow *w, all *all);
void credits(sfRenderWindow *w, credits_s *c, all *all);

/// Init ///
all *init_all(void);
menu *init_menu(void);
menu_next *init_menu_next(void);
map_t *map1_init(void);
map_t *map2_init(void);
map_t *map3_init(void);
map_t *map4_init(void);
cursor *init_cursor(void);
opt *init_option(void);
rect_t *init_rect1(void);
pos_txt *init_pos_txt(sfVector2f pos, sfText *text);
pause_s *init_pause(void);
help *init_help(void);
level_t *level_f(level_t *level);
lay_above_t **lay_above2_f(void);
lay_above_t *roof2_f(char *name, int x, int y);
button *init_button(sfVector2f pos, sfIntRect rect, sfColor color, char *txt);
button *init_text(int nb_txt);
button *init_sign(void);
pokemon_t *init_infernape(void);
pokemon_t *init_our_infernape(all *all);
pokemon_t *init_empoleon(void);
pokemon_t *init_our_empoleon(all *all);
pokemon_t *init_torterra(void);
pokemon_t *init_our_torterra(all *all);
obstacle_t *obstacle_init(int x0, int y0, int x1, int y1);
obstacle_t **obstacle_f(map_t *map);
obstacle_t **grass0_f(map_t *map);
obstacle_t **obstacle3_f(map_t *map);
obstacle_t **grass2_f(map_t *map);
attack_t *att(int name, int type, int puissance, int type_att);
attack_t **torterra_att(pokemon_t *pers);
attack_t **pikachu_att(pokemon_t *pers);
attack_t **arcanine_att(pokemon_t *pers);
attack_t **empoleon_att(pokemon_t *pers);
attack_t **garchomp_att(pokemon_t *pers);
attack_t **infernape_att(pokemon_t *pers);
attack_t **milotic_att(pokemon_t *pers);
pokemon_t *init_garchomp(void);
pokemon_t *init_our_garchomp(all *all);
pokemon_t *init_arcanine(void);
pokemon_t *init_our_arcanine(all *all);
pokemon_t *init_pikachu(void);
pokemon_t *init_our_pikachu(all *all);
pokemon_t *init_milotic(void);
pokemon_t *init_our_milotic(all *all);
game_t *init_bar(void);
game_t *init_fight(void);
game_t **init_board1(void);
game_t **init_board2(void);
game_t **init_board3(void);
game_t **init_board4(void);
game_t *init_pokeball(void);
game_t *init_help_char(void);
game_t *init_help_fight(void);
game_t *init_help_map(void);
game_t *init_dresseur(void);
game_t *init_board(void);
game_t *init_pers(void);
game_t *init_prof(void);
game_t *init_pnj_one(void);
game_t *init_pnj_two(void);
game_t *init_pnj_three(void);
game_t *init_pnj_four(void);
game_t *init_damien(void);
game_t *starter_f(void);
game_t *init_board_sol(int i);
game_t *init_board_normal(int i);
game_t *init_board_rock(int i);
game_t *init_board_eau(int i);
game_t *init_board_acier(int i);
game_t *init_board_ice(int i);
game_t *init_board_dragon(int i);
game_t *init_board_dark(int i);
game_t *init_board_vol(int i);
game_t *init_board_fight(int i);
game_t *init_board_grass(int i);
game_t *init_board_feu(int i);
game_t *init_board_eclair(int i);
game_t *init_board_quit(void);
game_t *init_cinematic(void);
game_t *init_lose(void);
game_t *init_win(void);
credits_s *init_credits(void);
void init_text_prof(button *button);
void init_text_pnj_one(button *button);
void init_text_pnj_two(button *button);
void init_text_pnj_tree(button *button);
void init_text_pnj_four(button *button);
void init_text_pnj_damien(button *button);
button *init_button_pok(sfVector2f pos, sfIntRect rect, \
sfColor color, char *txt);
void name_wild_pok(all *all, int pok);
void name_our_pok(all *all, int pok);
void name_pok_empoleon_att(all *all, int pok);
void name_pok_infernape_att(all *all, int pok);
void name_pok_torterra_att(all *all, int pok);
void what_att_for_our_pok(all *all, int our);
button *init_button_pok_att(sfVector2f pos, sfIntRect rect, \
sfColor color, char *txt);
button *init_name_pok(void);
button *init_name_wild_pok(void);
button *init_name_att_one(void);
button *init_name_att_two(void);
button *init_name_att_three(void);
button *init_name_att_four(void);
game_t *init_board_pokeball(void);
game_t *init_inv_pok(void);
game_t *init_inv_pok_board(void);
game_t *init_inv_bar_one(void);
game_t *init_inv_bar_two(void);
game_t *init_inv_bar_three(void);
game_t *init_inv_bar_four(void);
game_t *init_inv_bar_five(void);
game_t *logo_pok(void);
game_t *logo_pok_two(void);
game_t *logo_pok_three(void);
game_t *logo_pok_four(void);
game_t *logo_pok_five(void);
game_t *logo_pok_six(void);
game_t *init_inv_c_one(void);
game_t *init_inv_c_two(void);
game_t *init_inv_c_three(void);
game_t *init_inv_c_four(void);
game_t *init_inv_c_five(void);
game_t *init_inv_c_six(void);
game_t *init_hydro_pump(void);
rect_t *init_inv_pv(void);
rect_t *init_inv_pv_two(void);
rect_t *init_inv_pv_three(void);
rect_t *init_inv_pv_four(void);
rect_t *init_inv_pv_five(void);
rect_t *init_inv_pv_six(void);
sfIntRect init_arcanine_ar(pokemon_t *pers);
sfIntRect init_torterra_ar(pokemon_t *pers);
sfIntRect init_pikachu_ar(pokemon_t *pers);
sfIntRect init_empoleon_ar(pokemon_t *pers);
sfIntRect init_staraptor_ar(pokemon_t *pers);
sfIntRect init_garchomp_ar(pokemon_t *pers);
sfIntRect init_infernape_ar(pokemon_t *pers);
sfIntRect init_milotic_ar(pokemon_t *pers);
sfIntRect init_gliscor_ar(pokemon_t *pers);
void six_init_all(all *all);
void seven_init_all(all *all);
attack_t **gliscor_att(pokemon_t *pers);
pokemon_t *init_gliscor(void);
pokemon_t *init_our_gliscor(all *all);

/// Clear ///
all *clear_all(all *all);

#endif /* !RPG_H_ */
