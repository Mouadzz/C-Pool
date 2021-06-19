# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 16:07:20 by mouadlas          #+#    #+#              #
#    Updated: 2021/06/19 10:47:15 by mlasrite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGE= -Wall -Wextra -Werror

NAME = fewFunctions

all : $(NAME)

$(NAME) : $(SRC)
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all