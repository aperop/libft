# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 17:59:45 by dhawkgir          #+#    #+#              #
#    Updated: 2021/12/13 13:57:38 by dhawkgir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./sources/

PATH_INCLS = ./

SRCS =	$(PATH_SRCS)ft_atoi.c			$(PATH_SRCS)ft_bzero.c			\
		$(PATH_SRCS)ft_calloc.c			$(PATH_SRCS)ft_isalnum.c		\
		$(PATH_SRCS)ft_isalpha.c		$(PATH_SRCS)ft_isascii.c		\
		$(PATH_SRCS)ft_isdigit.c		$(PATH_SRCS)ft_isprint.c		\
		$(PATH_SRCS)ft_itoa.c			$(PATH_SRCS)ft_memchr.c			\
		$(PATH_SRCS)ft_memcmp.c			$(PATH_SRCS)ft_memcpy.c			\
		$(PATH_SRCS)ft_memmove.c		$(PATH_SRCS)ft_memset.c			\
		$(PATH_SRCS)ft_putchar_fd.c		$(PATH_SRCS)ft_putendl_fd.c		\
		$(PATH_SRCS)ft_putnbr_fd.c		$(PATH_SRCS)ft_putstr_fd.c		\
		$(PATH_SRCS)ft_split.c			$(PATH_SRCS)ft_strchr.c			\
		$(PATH_SRCS)ft_strdup.c			$(PATH_SRCS)ft_striteri.c		\
		$(PATH_SRCS)ft_strjoin.c		$(PATH_SRCS)ft_strlcat.c		\
		$(PATH_SRCS)ft_strlcpy.c		$(PATH_SRCS)ft_strlen.c			\
		$(PATH_SRCS)ft_strmapi.c		$(PATH_SRCS)ft_strncmp.c		\
		$(PATH_SRCS)ft_strnstr.c		$(PATH_SRCS)ft_strrchr.c		\
		$(PATH_SRCS)ft_strtrim.c		$(PATH_SRCS)ft_substr.c			\
		$(PATH_SRCS)ft_tolower.c		$(PATH_SRCS)ft_toupper.c

INCLS = ../libft.h

BNS =	$(PATH_SRCS)ft_lstadd_back.c	$(PATH_SRCS)ft_lstadd_front.c	\
		$(PATH_SRCS)ft_lstclear.c		$(PATH_SRCS)ft_lstdelone.c		\
		$(PATH_SRCS)ft_lstiter.c		$(PATH_SRCS)ft_lstlast.c		\
		$(PATH_SRCS)ft_lstmap.c			$(PATH_SRCS)ft_lstnew.c			\
		$(PATH_SRCS)ft_lstsize.c

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_B = $(patsubst %.c, %.o, $(BNS))

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $?

$(PATH_SRCS)%.o: %.c $(INCLS)
		$(CC) $(FLAGS) -I $(PATH_INCLS) -c $< $(PATH_SRCS)

bonus: all
		make OBJ="$(OBJ_B)" all
	
clean:
		$(RM) $(OBJ) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus