/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** srtuct
*/

#ifndef STRUCT_H_
#define STRUCT_H_
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>

#define     RED "\033[1;31m"
#define   GREEN "\033[0;32m"
#define  YELLOW "\033[1;33m"
#define    BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define    CYAN "\033[1;36m"
#define   WHITE "\033[0;37m"
#define  NORMAL "\033[00m"
#define EAU 0
#define ACIER 1
#define FEU 2
#define VOL 3
#define SOL 4
#define PLANTE 5
#define TENEBRE 6
#define DRAGON 7
#define COMBAT 8
#define GLACE 9
#define ROCHE 10
#define NORMALE 11
#define ECLAIRE 12

#define ERROR 84

typedef struct stat_s
{
    int pv;
    int att;
    int att_spe;
    int def;
    int def_spe;
    int vit;
}stat_t;

typedef struct attack_s
{
    int name;
    int type;
    int puissance;
    int type_att;
}attack_t;

typedef struct pokemon_s
{
    sfSprite *sprite_f;
    sfTexture *texture_p;
    sfTime time;
    sfRectangleShape *rect;
    sfClock *cl;
    sfVector2f position;
    sfVector2f pv_pos;
    sfVector2f size;
    sfVector2f scale;
    sfTexture *texture_f;
    sfIntRect ar;
    sfIntRect ar_two;
    stat_t *stat;
    attack_t **attack;
    int type[2];
    sfSound *sound_pok;
    sfSoundBuffer *sound_buffer_pok;
    int board1;
    int board2;
    int board3;
    int board4;
}pokemon_t;

typedef struct button_s
{
    sfSprite *sprite;
    sfFont *font;
    sfText *txt;
    sfVector2f pos;
    sfIntRect rect;
    char **text;
    int nb_text;
}button;

typedef struct cursor
{
    sfSprite *cursor;
    sfIntRect idle;
    sfIntRect press;
    sfClock *clock;
    int choose;
}cursor;

typedef struct pos_txt
{
    sfVector2f pos;
    sfText *txt;
}pos_txt;

typedef struct option
{
    sfSprite *fond;
    sfFont *font;
    pos_txt *title;
    pos_txt *res;
    pos_txt *sound;
    pos_txt *int_sound;
    pos_txt *int_frame_limit;
    pos_txt *s_frame_limit;
    pos_txt *warning;
    button *high_res;
    button *low_res;
    button *up_sound;
    button *down_sound;
    button *up_frame_limit;
    button *down_frame_limit;
    button *back;
}opt;

typedef struct obstacle_s {
    sfFloatRect rect;
    sfVector2f pos;
    int block;
} obstacle_t;

typedef struct rect_s
{
    sfRenderWindow *window;
    sfFloatRect *rectfloat;
    sfRectangleShape *rect;
    sfVector2f position;
    sfVector2f size;
}rect_t;

typedef struct lay_above {
    sfVector2f pos;
    sfSprite *sprite_f;
    sfVector2f scale;
} lay_above_t;

typedef struct cord_s
{
    int max_x;
    int min_x;
    int max_y;
    int min_y;
}cord_t;

typedef struct level_s
{
    int level;
    cord_t *cord_map;
    cord_t *cord_pers;
}level_t;

typedef struct s_map {
    sfSprite *sprite_f;
    sfTexture *texture_p;
    sfTime time;
    sfTime time2;
    sfRectangleShape *rect;
    sfClock *cl;
    sfClock *cl2;
    sfVector2f position;
    sfVector2f size;
    sfVector2f scale;
    sfTexture *texture_f;
    sfIntRect ar;
    sfMusic *music;
    lay_above_t **lay_above;
    int obstacles;
    int lay;
    obstacle_t **obstacle;
} map_t;

typedef struct help_s
{
    sfSprite *fond;
    sfFont *font;
    pos_txt *title;
    button *back;
}help;

typedef struct pause_t
{
    sfSprite *fond;
    sfFont *font;
    pos_txt *title;
    pos_txt *pokemon;
    pos_txt *inventory;
    pos_txt *option;
    pos_txt *resume;
    pos_txt *quit;
    pos_txt *menu;
}pause_s;

typedef struct credits_t
{
    sfClock *mov_txt;
    sfFont *font;
    button *back;
    pos_txt *defile;
    sfSprite *clem;
    sfIntRect clem_c;
    sfSprite *rob;
    sfMusic *music;
}credits_s;

typedef struct s_game
{
    sfSprite *sprite_f;
    sfTexture *texture_p;
    sfFont *font;
    sfTime time;
    sfTime time2;
    sfRectangleShape *rect;
    sfClock *cl;
    sfClock *cl2;
    sfClock *wait;
    sfVector2f position;
    sfVector2f size;
    sfVector2f scale;
    sfTexture *texture_f;
    sfIntRect ar;
    sfMusic *music;
    button *text;
    pos_txt *texxt;
    pos_txt *cine;
    pos_txt *last;
}game_t;

typedef struct menu_next
{
    sfSprite *fond;
    sfSprite *help;
    sfIntRect rect;
    button *play;
    button *back;
    button *quit;
    button *option;
    help *h;
}menu_next;

typedef struct s_menu
{
    sfSprite *fond;
    sfSprite *title;
    sfSprite *start;
    sfFont *font;
    sfMusic *music;
    sfSound *sound_button;
    sfSoundBuffer *sound_buffer;
    sfClock *wait;
    button *play;
    menu_next *next;
}menu;

typedef struct anim_s
{
    int w;
    int s;
    sfVector2f pos;
    sfVector2f pok_pos;
}anim_t;

typedef struct all
{
    sfRenderWindow *w;
    cursor *cursor;
    pause_s *pause;
    map_t *map[4];
    level_t *game;
    menu *menu;
    opt *option;
    sfTime time;
    sfClock *cl;
    unsigned int frame_limit;
    int volume;
    int back;
    button *sign;
    button *name_pok;
    button *name_wild_pok;
    button *name_att_one;
    button *name_att_two;
    button *name_att_three;
    button *name_att_four;
    game_t *fight;
    game_t *dresseur;
    game_t *damien;
    game_t **board1;
    game_t **board2;
    game_t **board3;
    game_t **board4;
    game_t *board_quit;
    game_t *bar;
    pokemon_t **pokemon;
    pokemon_t **our_pok;
    game_t *pers;
    game_t *starter;
    game_t *prof;
    game_t *pnj_one;
    game_t *pnj_two;
    game_t *pnj_three;
    game_t *pnj_four;
    game_t *pnj_six;
    game_t *pokeball;
    game_t *help_char;
    game_t *help_fight;
    game_t *help_map;
    game_t *cinematic;
    game_t *lose;
    game_t *win;
    game_t *catch_pok;
    game_t *hydro_pump;
    game_t *catch_button;
    game_t *inv_pok;
    game_t *inv_pok_board;
    game_t **inv_bar;
    game_t **logo_pok;
    game_t **inv_bar_c;
    credits_s *credit;
    int grade;
    int pok;
    int *our_inv_pok;
    rect_t **inv_pv;
    anim_t *anim_att;
}all;

#endif /* !STRUCT_H_ */
