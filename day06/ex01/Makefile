# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 11:06:31 by mouadlas          #+#    #+#              #
#    Updated: 2021/05/24 14:47:20 by mouadlas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Serialization.cpp main.cpp

FLAGE= -Wall -Wextra -Werror

NAME = serialize

all : $(NAME)

$(NAME) :
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all