# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/11 22:47:00 by vi-hong           #+#    #+#              #
#    Updated: 2016/12/11 23:48:45 by vi-hong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re	

NAME		= ft_display_file
OBJ			= display_file.o
SRC			= display_file.c

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	rm -rf *.o $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
