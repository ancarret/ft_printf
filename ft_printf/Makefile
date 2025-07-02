# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancarret <ancarret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 16:18:22 by ancarret          #+#    #+#              #
#    Updated: 2025/01/28 12:04:03 by ancarret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Werror -Wextra 
SRCS = libftprintf.c libftprintf_func.c libftprintf_base.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME) $(OBJS) $(BONUS_OBJS)

re: fclean all