# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/03 14:16:21 by mlasrite          #+#    #+#              #
#    Updated: 2021/04/03 14:16:24 by mlasrite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp add_contacts.cpp search_contacts.cpp print_contacts.cpp

FLAGE= -Wall -Wextra -Werror

NAME = phonebook

all : $(NAME)

$(NAME) :
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all
