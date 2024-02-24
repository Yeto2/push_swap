# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 21:56:01 by yessemna          #+#    #+#              #
#    Updated: 2024/02/24 09:02:27 by yessemna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = push_swap
NAME_B = checker

SRC = ./Mandatory/push_swap.c ./Mandatory/includes/ft_atoi.c ./Mandatory/includes/ft_isdigit.c ./Mandatory/includes/ft_lstadd_back.c\
	./Mandatory/includes/ft_lstlast.c ./Mandatory/includes/ft_lstnew.c ./Mandatory/includes/ft_lstsize.c ./Mandatory/includes/ft_calloc.c\
	./Mandatory/includes/ft_substr.c ./Mandatory/includes/ft_strchr.c ./Mandatory/includes/ft_memset.c ./Mandatory/includes/ft_lstadd_front.c\
	./Mandatory/includes/ft_split.c ./Mandatory/includes/ft_bzero.c ./Mandatory/includes/ft_strjoin.c ./Mandatory/includes/ft_strlen.c\
	./Mandatory/includes/message.c ./Mandatory/includes/init_stack.c ./Mandatory/includes/sort.c ./Mandatory/includes/sort_utils.c \
	./Mandatory/includes/sort_advanced.c ./Mandatory/includes/reverse_rotate.c ./Mandatory/includes/rotate.c\
	./Mandatory/includes/swap.c ./Mandatory/includes/push.c\
	
SRC_B = ./Bonus/checker.c ./Bonus/includes_bonus/ft_atoi.c ./Bonus/includes_bonus/ft_lstadd_back.c\
	./Bonus/includes_bonus/ft_lstnew.c ./Bonus/includes_bonus/ft_lstsize.c ./Bonus/includes_bonus/push.c\
	./Bonus/includes_bonus/ft_split.c ./Bonus/includes_bonus/ft_strchr.c ./Bonus/includes_bonus/message.c\
	./Bonus/includes_bonus/init_stack.c ./Bonus/includes_bonus/swap.c ./Bonus/includes_bonus/rotate.c\
	./Bonus/includes_bonus/reverse_rotate.c ./Bonus/includes_bonus/ft_substr.c ./Bonus/includes_bonus/ft_bzero.c\
	./Bonus/includes_bonus/ft_calloc.c  ./Bonus/includes_bonus/ft_memset.c ./Bonus/includes_bonus/get_next_line.c\
	./Mandatory/includes/ft_strjoin.c ./Bonus/includes_bonus/ft_strlen.c ./Bonus/includes_bonus/ft_strcmp.c\
	

OBJ = $(SRC:%.c=%.o)
OBJ_B = $(SRC_B:%.c=%.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(NAME_B): $(OBJ_B)
	@$(CC) $(CFLAGS) $(OBJ_B) -o $(NAME_B)

%.o: %.c ./Mandatory/includes/push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

%.o: %.c ./Bonus/includes/checker.h
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

bonus : $(NAME_B)

clean:
	@$(RM)	$(OBJ)	$(OBJ_B)

fclean:	clean
	@$(RM)	$(NAME)	$(NAME_B) 

re: fclean all

.PHONY: all clean fclean re bonus