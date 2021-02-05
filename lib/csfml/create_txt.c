/*
** EPITECH PROJECT, 2020
** csfml
** File description:
** create_txt
*/

#include "../../include/rpg.h"
#include "../../include/struct.h"

sfText *create_txt(int size, sfFont *font, sfColor color, char *string)
{
    sfText *text = sfText_create();
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setString(text, string);
    sfText_setColor(text, color);
    return (text);
}
