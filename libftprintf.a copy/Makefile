# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 11:44:18 by acuesta-          #+#    #+#              #
#    Updated: 2022/10/25 12:18:33 by acuesta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

# INCLUDES = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRCS = 

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


