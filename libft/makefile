# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vduriez <vduriez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 14:28:44 by vduriez           #+#    #+#              #
#    Updated: 2020/05/25 14:35:05 by vduriez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c		\
      ft_isalnum.c	\
      ft_isalpha.c	\
      ft_isascii.c	\
      ft_isdigit.c	\
      ft_strlen.c	\
      ft_strnstr.c	\
      ft_strstr.c	\
      ft_strnstr.c	\
      ft_toupper.c	\
      ft_tolower.c	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)
			ranlib $(NAME)

%.o: %.c
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all 
