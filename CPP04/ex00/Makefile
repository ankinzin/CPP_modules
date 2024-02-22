SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex00

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: clean all

.PHONY : all clean re