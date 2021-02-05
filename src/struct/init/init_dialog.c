/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_dialog
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void init_text_prof(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   Hello, young adventurer!";
    button->text[1] = "\n   I'm the professor ...";
    button->text[2] = "\n   I see you want to go on an\n adventure ?";
    button->text[3] = "\n   You're lucky I have 3 pokemon\n   in my bag.";
    button->text[4] = "\n   Choose your pokemon carefully\n \
    with reflection !";
    button->text[5] = "\n   It will accompany\n  you throughout \
    your adventure!";
    sfText_setColor(button->txt, sfBlack);
}

void init_text_pnj_damien(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   I'm THE Champion";
    button->text[1] = "\n   Tangy!!!";
    button->text[2] = "\n   I know you want to be the best Tech One";
    button->text[3] = "\n   Okay well";
    button->text[4] = "\n   I accepte you're chalenge";
    button->text[5] = "\n   But you can't beat me";
    button->text[6] = "\n   ...\n  You're now the new Champion";
    button->text[7] = "\n   ...\n  You're now the new Champion";
    sfText_setColor(button->txt, sfBlack);
}

button *init_text(int nb_txt)
{
    sfVector2f size = {7, 7};
    sfVector2f size2 = {2, 2};
    button *button = malloc(sizeof(struct button_s));
    button->font = sfFont_createFromFile("Ressources/polices/text.TTF");
    button->sprite = create_sprite("Ressources/game/textbar.png");
    button->txt = sfText_create();
    button->pos.x = 10;
    button->pos.y = 700;
    sfSprite_setPosition(button->sprite, button->pos);
    sfText_setPosition(button->txt, button->pos);
    sfSprite_setScale(button->sprite, size);
    sfText_setScale(button->txt, size2);
    button->nb_text = nb_txt;
    button->text = malloc(sizeof(char *) * button->nb_text);
    return (button);
}
