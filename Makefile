# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 21:56:01 by yessemna          #+#    #+#              #
#    Updated: 2024/02/20 20:45:32 by yessemna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror -g
RM = rm -f

NAME = push_swap

SRC = push_swap.c ./includes/ft_atoi.c ./includes/ft_isdigit.c ./includes/ft_lstadd_back.c\
	./includes/ft_lstlast.c ./includes/ft_lstnew.c ./includes/ft_lstsize.c ./includes/ft_calloc.c\
	./includes/ft_substr.c ./includes/ft_strchr.c ./includes/ft_memset.c ./includes/ft_lstadd_front.c\
	./includes/ft_strlen.c ./includes/ft_split.c ./includes/ft_bzero.c ./includes/ft_strjoin.c\
	./includes/message.c ./includes/init_stack.c ./includes/actions.c ./includes/sort.c\
	./includes/sort_advanced.c\

OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

$(NAME_B): $(OBJ_B)
	@$(CC) $(CFLAGS) $(OBJ_B) -o $(NAME_B)

%.o: %.c ./includes/push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)
clean:
	@$(RM) $(OBJ) $(OBJ)

fclean: clean
	@$(RM) $(NAME) $(NAME)

re: clean all

.PHONY: clean all fclean re bonus 