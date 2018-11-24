# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thdervil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:23:34 by thdervil          #+#    #+#              #
#    Updated: 2018/11/07 19:57:58 by thdervil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
FLG = -Wall -Wextra -Werror

SRC = srcs/main.c

OBJ = $(SRC:.c=.o)

HDR = includes/

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) -I $(HDR) -c $< -o $@ $(FLG)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
