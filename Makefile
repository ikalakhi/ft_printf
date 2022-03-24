# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 20:59:17 by ikalakhi          #+#    #+#              #
#    Updated: 2022/02/17 16:57:52 by ikalakhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c prinft_leader.c ft_putstr.c ft_putnbr.c \
	  unsigned_nbr.c ft_hexnumbr.c prinft_ptr.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
