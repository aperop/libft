# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 17:59:45 by dhawkgir          #+#    #+#              #
#    Updated: 2021/12/13 13:22:30 by dhawkgir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

PATH_SRCS = ./sourses/

PATH_INCLS = ./

SRCS =	$(PATH_SRCS)atoi.c			$(PATH_SRCS)bzero.c			\
		$(PATH_SRCS)calloc.c		$(PATH_SRCS)isalnum.c		\
		$(PATH_SRCS)isalpha.c		$(PATH_SRCS)isascii.c		\
		$(PATH_SRCS)isdigit.c		$(PATH_SRCS)isprint.c		\
		$(PATH_SRCS)itoa.c			$(PATH_SRCS)memchr.c		\
		$(PATH_SRCS)memcmp.c		$(PATH_SRCS)memcpy.c		\
		$(PATH_SRCS)memmove.c		$(PATH_SRCS)memset.c		\
		$(PATH_SRCS)putchar_fd.c	$(PATH_SRCS)putendl_fd.c	\
		$(PATH_SRCS)putnbr_fd.c		$(PATH_SRCS)putstr_fd.c		\
		$(PATH_SRCS)split.c			$(PATH_SRCS)strchr.c		\
		$(PATH_SRCS)strdup.c		$(PATH_SRCS)striteri.c		\
		$(PATH_SRCS)strjoin.c		$(PATH_SRCS)strlcat.c		\
		$(PATH_SRCS)strlcpy.c		$(PATH_SRCS)strlen.c		\
		$(PATH_SRCS)strmapi.c		$(PATH_SRCS)strncmp.c		\
		$(PATH_SRCS)strnstr.c		$(PATH_SRCS)strrchr.c		\
		$(PATH_SRCS)strtrim.c		$(PATH_SRCS)substr.c		\
		$(PATH_SRCS)tolower.c		$(PATH_SRCS)toupper.c

INCLS = libft.h

BNS =	$(PATH_SRCS)lstadd_back.c	$(PATH_SRCS)lstadd_front.c	\
		$(PATH_SRCS)lstclear.c		$(PATH_SRCS)lstdelone.c		\
		$(PATH_SRCS)lstiter.c		$(PATH_SRCS)lstlast.c		\
		$(PATH_SRCS)lstmap.c		$(PATH_SRCS)lstnew.c		\
		$(PATH_SRCS)lstsize.c

OBJ = $(patsubst %.c, %.o, $(SRCS))
OBJ_B = $(patsubst %.c, %.o, $(BNS))

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $?

%.o: %.c $(INCLS)
		$(CC) $(FLAGS) -I $(PATH_INCLS) -c $<

bonus: all
		make OBJ="$(OBJ_B)" all
	
clean:
		$(RM) $(OBJ) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus