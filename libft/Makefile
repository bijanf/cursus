# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:32:28 by bfallah-          #+#    #+#              #
#    Updated: 2023/11/22 12:11:51 by bfallah-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memmove.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memchr.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_substr.c \
				ft_split.c \
				ft_strtrim.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_itoa.c \
				ft_putendl_fd.c \
				ft_striteri.c


OBJS = ${SRCS:.c=.o}

SRCS_BONUS = 	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

$(NAME): 	$(OBJS)
			${CC} ${CFLAGS} -c ${SRCS}
			ar rc ${NAME} ${OBJS} libft.h
all: 		$(NAME) bonus

bonus:		${BJS_BONUS}
			${CC} ${CFLAGS} -c ${SRCS_BONUS}
			ar rc ${NAME} ${OBJS_BONUS} libft.h
clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
			${RM} ${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re