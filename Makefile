# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 19:20:57 by danielga          #+#    #+#              #
#    Updated: 2024/07/04 12:34:49 by danielga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = main.c make_game.c check_map.c game.c play.c f_map.c
OBJS = ${SRC:.c=.o}

SRC_LIBFT	= ./libft
LIBFT = ./libft/libft.a

MLX42 = /sgoinfre/shared/MLX42/build

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f


all: $(NAME)

$(NAME):  $(OBJS)
	make -C $(MLX42)
	@make -C $(SRC_LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX42) -o $(NAME)

clean: 
	$(RM) $(OBJS)
	make clean -C ./libft
	make clean -C $(MLX42)
	
fclean: clean
	$(RM) $(NAME)
	make fclean -C ./libft

re: fclean all

.PHONY: all, clean, fclean, re

