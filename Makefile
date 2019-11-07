# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thomasgermain <thomasgermain@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 14:34:05 by thgermai          #+#    #+#              #
#    Updated: 2019/11/07 22:55:29 by thomasgerma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./sources/ft_atoi.c\
   	./sources/ft_memchr.c\
	./sources/ft_strlen.c\
	./sources/ft_bzero.c\
    ./sources/ft_memcmp.c\
	./sources/ft_strncmp.c\
	./sources/ft_isalnum.c\
	./sources/ft_memcpy.c\
	./sources/ft_strnstr.c\
	./sources/ft_isalpha.c\
	./sources/ft_memmove.c\
	./sources/ft_strrchr.c\
	./sources/ft_isascii.c\
	./sources/ft_memset.c\
	./sources/ft_tolower.c\
	./sources/ft_isdigit.c\
	./sources/ft_strchr.c\
	./sources/ft_toupper.c\
	./sources/ft_isprint.c\
	./sources/ft_strlcat.c\
	./sources/ft_memccpy.c\
	./sources/ft_strlcpy.c\
	./sources/ft_putchar_fd.c\
	./sources/ft_putstr_fd.c\

OBJS = $(SRCS:.c=.o)
INCLUDES = ./includes/libft.h
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(CFLAGS) -I $(INCLUDES) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)
	rm -f includes/libft.h.gh

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY = all clean fclean re
