/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight
*/

#include "../../../include/rpg.h"
#include "../../../include/struct.h"

int catch_button(all *all, int our, int pok, sfMusic *musc)
{
    if (inv_button_fight(all)) {
        int ret = -1;
        ret = inventory_catch(all, our, pok);
        if (ret != -1) {
            fight_destroy(all, musc, pok);
            return ret;
        }
    }
    return 0;
}

int action_fight(all *all, int pok, int our, int i)
{
    if (quit_fight(all)) return 1;
    int ca = catch(all, pok, our);
    if (ca == 1) return 1;
    if (ca == 2) return 2;
    fight_regroup(all, i, our, pok);
    return 0;
}

int all_fight(all *all, int pok, int i, sfMusic *musc)
{
    int our = all->pok, fight_int = 0, a = -1;
    a = mouse_att(all);
    if (a != -1 && i == 1) {
        fight_int = fight_pokemon(all, pok, our, a);
        if (fight_int == 1) return -1;
        if (fight_one(all, musc, pok, fight_int) == 2) return 2;
    }
    int ac = action_fight(all, pok, our, i);
    if (ac == 1) return -1;
    if (ac == 2) {
        sfMusic_destroy(musc);
        return 2;
    }
    int ret = catch_button(all, our, pok, musc);
    if (ret) return ret;
    return 0;
}

int all_fight_two(all *all, int pok, int i, sfMusic *musc)
{
    int our = all->pok, fight_int = 0, a = -1;
    a = mouse_att(all);
    if (a != -1 && i == 1) {
        fight_int = fight_pokemon(all, pok, our, a);
        if (fight_int == 1) return -1;
        if (fight_one(all, musc, pok, fight_int) == 2) return 2;
    }
    int ret = catch_button(all, our, pok, musc);
    if (ret) return ret;
    fight_regroup(all, i, our, pok);
    return 0;
}

int fight(all *all, int comb, int nb_pok)
{
    int i = 0, pok = 0, our = all->pok, j = 0, fight_int = 0;
    pok = comb;
    sfMusic *musc = create_music("Ressources/musics/fight.ogg", sfTrue, sfTrue);
    fight_music(all, pok);
    while (sfRenderWindow_isOpen(all->w)) {
        i = fight_game(all, pok, our, i);
        if (nb_pok == -1) {
            int ret = all_fight(all, pok, i, musc);
            if (ret > 0) return ret;
            if (ret < 0) break;
        }
        else {
            int ret = all_fight_two(all, pok, i, musc);
            if (ret > 0) return ret;
            if (ret < 0) break;
        }
    }
    fight_destroy(all, musc, pok);
    return 1;
}
