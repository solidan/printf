# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acuesta- <acuesta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 12:03:57 by acuesta-          #+#    #+#              #
#    Updated: 2022/09/22 11:24:28 by acuesta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_strchr.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_calloc.c \
	   ft_putendl_fd.c \
	   ft_putstr_fd.c \
	   ft_putchar_fd.c \
	   ft_putnbr_fd.c \
	   ft_strjoin.c \
	   ft_striteri.c \
	   ft_strmapi.c \
	   ft_substr.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   
BONUSSRCS = ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstclear.c \

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUSSRCS:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $^
	
all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	ar rsc $(NAME) $(OBJS)

bonus: $(BONUSOBJS) $(OBJS) $(INCLUDES)
	ar rsc $(NAME) $(BONUSOBJS) $(OBJS)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re  bonus








# NAME = libft.a

# OBJS = ft_atoi.o \
# 	   ft_bzero.o \
# 	   ft_isalnum.o \
# 	   ft_isascii.o \
# 	   ft_isalpha.o \
# 	   ft_isdigit.o \
# 	   ft_isprint.o \
# 	   ft_memchr.o \
# 	   ft_memcmp.o \
# 	   ft_memcpy.o \
# 	   ft_memmove.o \
# 	   ft_memset.o \
# 	   ft_strchr.o \
# 	   ft_strlcat.o \
# 	   ft_strlcpy.o \
# 	   ft_strlen.o \
# 	   ft_strncmp.o \
# 	   ft_strstr.o \
# 	   ft_strrchr.o \
# 	   ft_tolower.O \
# 	   ft_toupper.O  \

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME): $(OBJS)
# 	ar rc libft.a $(OBJS)
	
# %.o: %.c
# 	 $(CC)  $(CFLAGS) -c $<

# clean:
# 	rm -rf *.o

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean
