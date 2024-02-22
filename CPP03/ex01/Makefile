SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex01

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re:	clean all

.PHONY : all clean re