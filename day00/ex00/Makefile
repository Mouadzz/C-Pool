# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 14:16:38 by mlasrite          #+#    #+#              #
#    Updated: 2021/04/03 14:16:39 by mlasrite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

FLAGE= -Wall -Wextra -Werror

NAME = megaphone

all : $(NAME)

$(NAME) :
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all