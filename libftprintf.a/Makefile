# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 11:44:18 by acuesta-          #+#    #+#              #
#    Updated: 2022/11/21 13:29:36 by acuesta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

INCLUDES = libftprintf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRCS = printf.c\
       ft_printf_utils.c\
	   ft_print_hexa.c

OBJS = $(SRCS:.c=.o)



all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $^
	
$(NAME): $(OBJS)  #$(INCLUDES)
	ar rsc $(NAME) $(OBJS)


clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 


