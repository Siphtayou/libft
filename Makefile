# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agilles <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 17:22:51 by agilles           #+#    #+#              #
#    Updated: 2023/10/17 18:22:58 by agilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

# Rule to create the library from object files
$(NAME): $(OBJ)
	ar rcs $@ $^
