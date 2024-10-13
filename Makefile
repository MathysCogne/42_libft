# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 17:07:08 by mcogne--          #+#    #+#              #
#    Updated: 2024/10/13 17:24:38 by mcogne--         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = src/
BONUS_DIR = bonus/
OBJ_DIR = obj/
INCLUDE = -I includes/

CC = gcc
CFLAGS = -Wall -Werror -Wextra


SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c

OBJS = $(SRC_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Libft create ✅"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(OBJ_DIR)$@

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "Libft + Bonus create ✅"


clean:
	@rm -f $(OBJS) $(BONUS_OBJS)	
	@echo "Clean ✅"

fclean: clean
	@rm -f $(NAME)
	@echo "Clean ✅"

re: fclean all

.PHONY: all clean fclean re bonus
