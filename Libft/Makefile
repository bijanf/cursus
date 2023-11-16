# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:32:28 by bfallah-          #+#    #+#              #
#    Updated: 2023/11/16 13:44:12 by bfallah-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
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

OBJ			= (SRC: .c .o)
# Specify extensions of files to delete when cleaning
CLEANEXTS   = o a



# Default target
.PHONY: all clean
all: $(OUTPUTFILE)
clean:
    for file in $(CLEANEXTS); do rm -f *.$$file; done
