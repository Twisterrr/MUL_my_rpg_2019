/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** clear_all
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void clear_all_two(all *all)
{
    sfSound_destroy(all->pokemon[2]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[2]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[2]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[2]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[3]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[3]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[3]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[3]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[4]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[4]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[4]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[4]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[5]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[5]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[5]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[5]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[6]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[6]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[6]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[6]->sound_buffer_pok);
}

void clear_music(all *all)
{
    sfMusic_stop(all->menu->music);
    sfMusic_destroy(all->menu->music);
    sfMusic_stop(all->map[0]->music);
    sfMusic_destroy(all->map[0]->music);
    sfMusic_destroy(all->map[1]->music);
    sfMusic_destroy(all->map[2]->music);
    sfMusic_destroy(all->map[3]->music);
    sfMusic_stop(all->credit->music);
    sfMusic_destroy(all->credit->music);
    sfSound_destroy(all->pokemon[7]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[7]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[7]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[7]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[8]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[8]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[8]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[8]->sound_buffer_pok);
}

all *clear_all(all *all)
{
    sfRenderWindow_destroy(all->w);
    clear_music(all);
    sfSound_destroy(all->menu->sound_button);
    sfSoundBuffer_destroy(all->menu->sound_buffer);
    sfSound_destroy(all->pokemon[0]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[0]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[0]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[0]->sound_buffer_pok);
    sfSound_destroy(all->pokemon[1]->sound_pok);
    sfSoundBuffer_destroy(all->pokemon[1]->sound_buffer_pok);
    sfSound_destroy(all->our_pok[1]->sound_pok);
    sfSoundBuffer_destroy(all->our_pok[1]->sound_buffer_pok);
    clear_all_two(all);
    all = NULL;
    return (NULL);
}
