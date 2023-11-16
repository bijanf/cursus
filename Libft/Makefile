# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:32:28 by bfallah-          #+#    #+#              #
#    Updated: 2023/11/16 14:11:21 by bfallah-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER		= libft.h
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g
OUTPUTFILE  =	libft.a

SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strdup.c \
				ft_calloc.c

OBJS		= $(SRCS:.c=.o)

# Specify extensions of files to delete when cleaning
CLEANEXTS   = o a

all: $(OUTPUTFILE)
$(OUTPUTFILE):	$(OBJS)
		@ar rc $(OUTPUTFILE) $(OBJS)
		@ranlib $(OUTPUTFILE)
clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(OUTPUTFILE)

re: fclean all

.PHONY: all clean
