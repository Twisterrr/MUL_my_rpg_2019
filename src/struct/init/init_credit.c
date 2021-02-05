/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_credit
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

credits_s *init_credits(void)
{
    credits_s *c = malloc(sizeof(*c));
    c->font = sfFont_createFromFile("Ressources/polices/text.TTF");
    c->defile = init_pos_txt((sfVector2f)\
    {500, 100}, create_txt(50, c->font, sfWhite, \
    "\t\tProducer : \n\t\t\tClement Berard \
    \n\n\t\tArtistic director : \
    \n\t\t\tClement Berard \n\t\t\tHugo Suzanne\n\n\t\tThe brain gameplay :\
    \n\t\t\tRobert Harakaly  \n\t\t\tClement Berard \
    \n\n\t\tDevelopper :\n\t\t\tClement Berard \
    \n\t\t\tRobert Harakaly \n\t\t\tHugo Suzanne \n\t\t\tYoussra El-ajli \
    \n\n\t\tAwards :\n\t\t\tBest Game of the year\
    \n\t\t\tBetter than all RPG at Epitech"));
    c->mov_txt = sfClock_create();
    c->music = create_music("Ressources/musics/credits.ogg", sfTrue, sfFalse);
    sfMusic_setVolume(c->music, 100);
    return (c);
}