SRC = Amateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex03

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: clean all

.PHONY : all clean re