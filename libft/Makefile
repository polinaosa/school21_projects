# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swhent <swhent@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#                                                      #+#    #+#              #
#                                                     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

LIB	=	ar rcs

SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strmapi.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_calloc.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_strnstr.c\


OBJ	=	$(SRC:.c=.o)

HEADER		=	libft.h

CC			=	gcc

CWFLAGS		=	-Wall -Wextra -Werror

COFLAG		=	-c

CNAMEFLAG	=	-o

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(HEADER)
				$(LIB) $(NAME) $?

%.o			:	%.c
				$(CC) $(CWFLAGS) $(COFLAG) $< $(CNAMEFLAG) $@

clean		:
				rm -f $(OBJ)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
