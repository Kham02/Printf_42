# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estrong <estrong@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 17:17:17 by estrong           #+#    #+#              #
#    Updated: 2021/11/15 16:57:36 by estrong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIST =	ft_printf.c	ft_c.c	ft_s.c	ft_di.c	ft_p.c	ft_u.c	ft_xX.c	ft_auxiliary_func.c

HEADER = ft_printf.h

OBJ = $(patsubst %.c,%.o,$(LIST))

CC = gcc
FL = -Wall -Wextra -Werror

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re