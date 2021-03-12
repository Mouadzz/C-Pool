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
