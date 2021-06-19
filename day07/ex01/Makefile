# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 16:54:05 by mouadlas          #+#    #+#              #
#    Updated: 2021/06/19 10:47:13 by mlasrite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGE= -Wall -Wextra -Werror

NAME = iter

all : $(NAME)

$(NAME) : $(SRC)
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all