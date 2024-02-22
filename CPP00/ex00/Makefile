SRC = MegaPhone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = megaphone

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re:	clean all

.PHONY : all clean re
