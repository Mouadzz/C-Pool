# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/04 12:40:49 by mlasrite          #+#    #+#              #
#    Updated: 2021/04/04 12:40:50 by mlasrite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = replace.cpp

FLAGE= -Wall -Wextra -Werror

NAME = replace

all : $(NAME)

$(NAME) : $(SRC)
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all