# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kntshoko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/05 16:35:17 by kntshoko          #+#    #+#              #
#    Updated: 2020/01/05 17:02:24 by kntshoko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in.a
EXE = lem-in
MAIN = lem-in.c
LIB = libft/libft.a 
CC = gcc
FLAG = -Wall -Werror -Wextra
ARC = ar rc
SRC =	lem-in.c ft_add_rooms.c  ft_create_rooms_list.c ft_cmp.c ft_occupy_room.c\
		ft_ant_location.c ft_end_full.c ft_next_room_empty.c ft_ant_infront.c\
		ft_next_ant.c ft_move_ants.c ft_wordc.c rd.c room.c ft_end.c conn.c validate.c\
		ft_printf_farm.c ft_pop_list.c i_strrchr.c free_all.c ft_create_list.c call_add_link.c\
		make_path.c ft_update_list.c ft_ants.c end_.c ft_splitlen.c ft_go_to_prev_bgn.c\
		ft_s_path_indx.c ft_short.c

OBJ =	lem-in.o ft_add_rooms.o  ft_create_rooms_list.o ft_cmp.o ft_occupy_room.o\
		ft_ant_location.o ft_end_full.o ft_next_room_empty.o ft_ant_infront.o\
		ft_next_ant.o ft_move_ants.o ft_wordc.o rd.o room.o ft_end.o conn.o validate.o\
		ft_printf_farm.o ft_pop_list.o i_strrchr.o free_all.o ft_create_list.o call_add_link.o\
		make_path.o ft_update_list.o ft_ants.o end_.o ft_splitlen.o ft_go_to_prev_bgn.o\
		ft_s_path_indx.o ft_short.o

all: $(NAME)

$(NAME):
		$(CC) $(FLAG) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)
		$(CC) $(FLAG) -o $(EXE) $(MAIN) $(NAME) $(LIB)

all: $(NAME)
	
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(EXE)

re: fclean all
