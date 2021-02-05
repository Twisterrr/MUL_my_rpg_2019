##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	my_rpg

CC	=	gcc -o

CFLAGS	=	-L ./lib/my -lmy -I./include/

SRC	=	src/main.c									\
		src/menu/menu.c 							\
		src/menu/event_menu.c 						\
		src/menu/draw/draw_menu.c 					\
		src/menu/draw/draw_button.c 				\
		src/menu/draw/hover_menu.c 					\
		src/menu/menu_next/menu_next.c 				\
		src/menu/menu_next/draw_menu_next.c 		\
		src/menu/menu_next/event_menu_next.c 		\
		src/menu/option/option.c 					\
		src/menu/option/event_option.c 				\
		src/menu/option/pressed/pressed_sound.c 	\
		src/menu/option/pressed/pressed_back.c 		\
		src/menu/option/pressed/pressed_frame.c 	\
		src/menu/option/pressed/pressed_res.c 		\
		src/menu/option/draw/draw_option.c 			\
		src/menu/option/draw/hover_option.c 		\
		src/game/game.c								\
		src/game/pers.c								\
		src/game/event_game.c						\
		src/game/utils/utils_map1.c 				\
		src/game/utils/utils_game.c 				\
		src/game/utils/utils_movement.c 			\
		src/game/utils/utils_fight.c 				\
		src/game/utils/utils_names_attack.c 		\
		src/game/utils/utils_oponent.c 				\
		src/game/in_game/pause.c 					\
		src/game/in_game/pressed_pause.c 			\
		src/game/in_game/dialog_pnj.c				\
		src/game/in_game/dialog_pnj_one.c			\
		src/game/in_game/dialog_pnj_two.c			\
		src/game/in_game/dialog_pnj_three.c			\
		src/game/in_game/dialog_pnj_four.c			\
		src/game/in_game/dialog_damien.c			\
		src/game/in_game/dialog_prof.c				\
		src/game/in_game/event_text.c				\
		src/game/in_game/map1.c						\
		src/game/in_game/lose.c 					\
		src/game/in_game/win.c 						\
		src/game/in_game/inventory.c				\
		src/game/draw/draw_game.c 					\
		src/game/draw/movement.c 					\
		src/game/pokemon/choose_pok.c 				\
		src/game/pokemon/torterra.c					\
		src/game/pokemon/empoleon.c					\
		src/game/pokemon/arcanine.c 				\
		src/game/pokemon/garchomp.c 				\
		src/game/pokemon/infernape.c				\
		src/game/pokemon/staraptor.c				\
		src/game/pokemon/milotic.c				\
		src/game/pokemon/giscor.c				\
		src/game/pokemon/name_pok_att.c				\
		src/game/pokemon/name_pok_att_two.c			\
		src/game/pokemon/name_pok_att_three.c			\
		src/game/fight/dammage.c					\
		src/game/fight/oponent.c 					\
		src/game/fight/oponent_two.c 				\
		src/game/fight/fight.c						\
		src/game/fight/fight_f.c					\
		src/game/fight/fight_two.c					\
		src/game/fight/fight_three.c					\
		src/game/fight/catch.c					\
		src/game/fight/attack_pokemon_three.c			\
		src/game/fight/attack_pokemon_four.c			\
		src/game/fight/attack_pokemon.c 			\
		src/game/fight/attack_pokemon_two.c 		\
		src/game/fight/attack_pokemon_five.c		\
		src/game/fight/pv_pok_move.c 				\
		src/game/fight/pok_inv.c			\
		src/game/fight/resurrection.c 				\
		src/game/fight/resurrection_two.c 			\
		src/game/fight/resurrection_three.c		\
		src/game/fight/quit_fight.c					\
		src/game/fight/anim_att.c			\
		src/cur_hel_dits/cursor/cursor.c 			\
		src/cur_hel_dits/cinematic/cinematic.c 		\
		src/cur_hel_dits/help/help.c 				\
		src/cur_hel_dits/help/help_two.c			\
		src/cur_hel_dits/credit/credit.c 			\
		src/struct/init/init_all.c 					\
		src/struct/init/init_all_two.c			\
		src/struct/init/init_menu.c 				\
		src/struct/init/init_menu_next.c 			\
		src/struct/init/init_help.c 				\
		src/struct/init/init_game.c					\
		src/struct/init/init_logo_pok.c				\
		src/struct/init/init_logo_pok_next.c				\
		src/struct/init/init_pause.c 				\
		src/struct/init/init_cursor.c 				\
		src/struct/init/init_button.c 				\
		src/struct/init/init_sign.c 				\
		src/struct/init/init_dialog.c 				\
		src/struct/init/init_dialog_two.c 			\
		src/struct/init/init_player.c 				\
		src/struct/init/init_pnj.c 					\
		src/struct/init/init_pnj_two.c 				\
		src/struct/init/init_pos_txt.c 				\
		src/struct/init/init_cinematic.c 			\
		src/struct/init/init_option.c 				\
		src/struct/init/init_map1.c					\
		src/struct/init/init_map2.c					\
		src/struct/init/init_map3.c 				\
		src/struct/init/init_map4.c 				\
		src/struct/init/init_map1_utils.c 			\
		src/struct/init/init_map2_utils.c 			\
		src/struct/init/init_map3_utils.c 			\
		src/struct/init/init_attack_pokemon.c 		\
		src/struct/init/init_inv_c.c				\
		src/struct/init/init_attack_pokemon_two.c 	\
		src/struct/init/init_empoleon.c				\
		src/struct/init/init_infernape.c			\
		src/struct/init/init_torterra.c				\
		src/struct/init/init_garchomp.c				\
		src/struct/init/init_arcanine.c				\
		src/struct/init/init_pikachu.c				\
		src/struct/init/init_staraptor.c			\
		src/struct/init/init_milotic.c				\
		src/struct/init/init_gliscor.c				\
		src/struct/init/init_board.c				\
		src/struct/init/init_board_two.c			\
		src/struct/init/init_board_three.c			\
		src/struct/init/init_board_four.c			\
		src/struct/init/init_board_five.c			\
		src/struct/init/init_board_six.c			\
		src/struct/init/init_board_seven.c			\
		src/struct/init/init_board_eight.c			\
		src/struct/init/init_rect.c					\
		src/struct/init/init_rect_two.c				\
		src/struct/init/init_txt_name.c				\
		src/struct/init/init_txt_name_two.c			\
		src/struct/init/init_lose.c 				\
		src/struct/init/init_win.c 					\
		src/struct/init/init_bar.c				\
		src/struct/init/init_credit.c 				\
		src/struct/init/init_ar.c				\
		src/struct/init/init_ar_next.c				\
		src/struct/clear/clear_all.c 				\
		lib/csfml/create_music.c					\
		lib/csfml/create_sprite.c					\
		lib/csfml/create_txt.c						\
		lib/csfml/create_window.c					\
		lib/csfml/draw_button.c						\
		lib/csfml/draw_pos_txt.c					\
		lib/my/my_getnbr.c							\
		lib/my/my_printf.c							\
		lib/my/my_putchar.c							\
		lib/my/my_put_nbr_abs.c						\
		lib/my/my_putnbr_base.c						\
		lib/my/my_put_nbr.c							\
		lib/my/my_putstr.c							\
		lib/my/my_strlen.c							\
		lib/my/my_wrap_base.c						\
		lib/my/my_wrap.c							\
		lib/my/my_wrap_nbr.c						\
		lib/my/int_to_str.c 						\

OBJ	=	$(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) $(NAME) $(SRC) -l csfml-system -l csfml-graphics -l csfml-window -l csfml-audio

clean :
	find -name "*~" -delete , -name "*.o" -delete , -name "#*#" -delete
	rm -f $(OBJ)
	rm -f $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all
