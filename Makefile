# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 11:21:56 by hamchur           #+#    #+#              #
#    Updated: 2021/11/19 20:30:12 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_check.c \
	  ft_print_c.c \
	  ft_print_percent.c \
	  ft_parser.c \
	  ft_print_s.c \
	  ft_print_i.c \
	  ft_print_ui.c \
	  ft_print_hexa.c \
	  ft_print_p.c \
	  ft_str_tolower.c \
	  ft_putchar_fd.c \

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

COMPILE = gcc $(CFLAGS) -c

LIB = ar rcs $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

$(NAME): $(OBJ)
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

.PHONY: all clean fclean re