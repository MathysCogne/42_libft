# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:25:50 by mcogne--          #+#    #+#              #
#    Updated: 2024/11/12 16:18:41 by mcogne--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#so: $(OBJS)
#	$(CC) -fPIC $(CFLAGS) -c $(SRC)
#	$(CC) -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re bonus
