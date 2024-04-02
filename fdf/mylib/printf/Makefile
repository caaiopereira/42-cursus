# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 10:43:51 by caiperei          #+#    #+#              #
#    Updated: 2024/04/02 09:37:03 by caiperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

FILESC = ft_format.c ft_putchar.c ft_putnbr.c ft_putnumber.c ft_puthex.c \
ft_putstr.c ft_strchr.c ft_printf.c

OBJS = $(FILESC:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
