# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 10:20:12 by vi-hong           #+#    #+#              #
#    Updated: 2016/11/30 22:44:19 by vi-hong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME		= libft.a
SRC			= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ			= $(SRC:.c=.o)
D_HEADER	= includes
D_SRC		= srcs

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib libft.a	

%.o: $(D_SRC)/%.c
	$(CC) -c -I$(D_HEADER) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
