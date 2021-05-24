# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouadlas <mouadlas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 18:01:28 by mouadlas          #+#    #+#              #
#    Updated: 2021/05/24 18:01:45 by mouadlas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Base.cpp main.cpp

FLAGE= -Wall -Wextra -Werror

NAME = identify

all : $(NAME)

$(NAME) :
	clang++ $(FLAGE) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)
fclean :
	rm -rf $(NAME)
re : clean all