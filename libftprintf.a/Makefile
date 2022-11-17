# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 11:44:18 by acuesta-          #+#    #+#              #
#    Updated: 2022/11/15 11:41:31 by acuesta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

#INCLUDES = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_printf.c\
       ft_utils.c


OBJS = $(SRCS:.c=.o)



%.o: %.c
	$(CC) -c $(CFLAGS) $^
	
all: $(NAME)

$(NAME): $(OBJS)  #$(INCLUDES)
	ar rsc $(NAME) $(OBJS)


clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 


