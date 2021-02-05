/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_dialog_two
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

void init_text_pnj_one(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   Oh hello";
    button->text[1] = "\n   Congratulation you beat Damien";
    button->text[2] = "\n   And you have now the grade A";
    button->text[3] = "\n   That's incredible !";
    button->text[4] = "\n   I'm pretty sure you want \n \
    to beat the Champion";
    button->text[5] = "\n   But you must beat me";
    sfText_setColor(button->txt, sfBlack);
}

void init_text_pnj_two(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   Oh you're the guy who beat me ?";
    button->text[1] = "\n   I've been waiting this\n \
    for this moment for so long";
    button->text[2] = "\n   REVENGE";
    button->text[3] = "\n   You're incredible !";
    button->text[4] = "\n   You're incredible !";
    button->text[5] = "\n   How you can be this strong ?";
    button->text[6] = "\n   I don't get it...";
    sfText_setColor(button->txt, sfBlack);
}

void init_text_pnj_tree(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   Hahaha if you want to beat me";
    button->text[1] = "\n   You must beat Eric";
    button->text[2] = "\n   Oh What ? You beat Eric ?";
    button->text[3] = "\n   Okay...";
    button->text[4] = "\n   So strong";
    button->text[5] = "\n   So Strong";
    button->text[6] = "\n   ...";
        sfText_setColor(button->txt, sfBlack);
}

void init_text_pnj_four(button *button)
{
    sfText_setFont(button->txt, button->font);
    button->text[0] = "\n   I'm Damien";
    button->text[1] = "\n   And you must beat Alexis";
    button->text[2] = "\n   Hmm intersting";
    button->text[3] = "\n   Okay it's revenge time!!!";
    button->text[4] = "\n   And I will proove that\n \
    you don't deserve the grade A";
    button->text[5] = "\n   Well well... You can chalenge...";
    button->text[6] = "\n   The Champion ! But he is unbeatable !\n  HaHAHaHA";
    button->text[7] = "\n   He is in the Epi-Tower";
    sfText_setColor(button->txt, sfBlack);
}
