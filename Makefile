# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 11:01:53 by araqioui          #+#    #+#              #
#    Updated: 2023/02/23 19:15:35 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
HEADER = header.h 

SRC = main splitPaths ft_free exc_cmds ft_check \
		libft/ft_strncmp libft/ft_split libft/ft_memcpy \
		libft/ft_strjoin libft/ft_strlen libft/ft_putchar \
		libft/ft_putnbr libft/ft_putstr libft/ft_strdup \
		printf/ft_printf printf/ft_printf_utils \


OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ $(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re