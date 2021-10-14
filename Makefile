# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 17:59:45 by dhawkgir          #+#    #+#              #
#    Updated: 2021/10/14 18:28:22 by dhawkgir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./

PATH_INCLS = ./

SRCS =	ft_isascii.c	ft_memmove.c	ft_strchr.c		ft_strncmp.c	ft_atoi.c\
		ft_isdigit.c	ft_memset.c		ft_strdup.c		ft_strnstr.c	ft_bzero.c\
		ft_isprint.c	ft_putchar_fd.c	ft_striteri.c	ft_strrchr.c	ft_calloc.c\
		ft_memchr.c		ft_putendl_fd.c	ft_strlcat.c	ft_tolower.c	ft_isalnum.c\
		ft_memcmp.c		ft_putnbr_fd.c	ft_strlcpy.c	ft_toupper.c	ft_isalpha.c\
		ft_memcpy.c		ft_putstr_fd.c	ft_strlen.c

INCLS = libft.h

BNS = 

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_B = $(patsubst %.c, %.o, $(BNS))

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $?

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

bonus:
		@make OBJ = "$(OBJ_B)" all
	
clean:
		$(RM) $(OBJ) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus