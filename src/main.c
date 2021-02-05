/*
** EPITECH PROJECT, 2020
** rpg
** File description:
** main
*/

#include "../include/rpg.h"
#include "../include/struct.h"

void print_h(void)
{
    my_putstr(RED);
    my_putstr("\nWelcome to Pokemon Generations\n");
    my_putstr(CYAN);
    my_putstr("USAGE :\n");
    my_putstr(NORMAL);
    my_putstr("\t./my_rpg\n\n");
    my_putstr(CYAN);
    my_putstr("OPTIONS :\n");
    my_putstr(NORMAL);
    my_putstr("\t-h            print the usage and quit.\n\n");
    my_putstr("\tESCAPE_KEY    to go back \
    or in game to launch the pause menu.\n");
    my_putstr("\tIf you want more informations, go on the Help menu \
    and click on the symbols!");
    my_putstr(RED);
    my_putstr("\nHave fun !\n\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')) {
        print_h();
        return (0);
    }
    else if (ac != 1) {
        my_putstr("Use the command ./my_rpg -h for more information.\n");
        return (0);
    }
    if (ac == 1) {
        all *all = init_all();
        my_menu(all);
        all = clear_all(all);
    }
    return (0);
}
