# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thdervil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:23:34 by thdervil          #+#    #+#              #
#    Updated: 2018/11/07 16:45:10 by thdervil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLG = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c\
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c

OBJ = $(SRC:.c=.o)

HDR = includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) -I $(HDR) -c $< -o $@ $(FLG)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
