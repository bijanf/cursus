# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 15:57:05 by bfallah-          #+#    #+#              #
#    Updated: 2023/12/10 18:47:18 by bfallah-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include/
RM = rm -rf
NAME = libftprintf.a
MAKE = make
SRCS = src/ft_printf.c \
	   src/ft_print_fp.c \
	   src/ft_print_hex.c \
	   src/ft_printnbr.c \
	   src/ft_putnbr_unsigned.c \
	   src/print_string.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS) -c $< -o $@

all: $(NAME)
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
