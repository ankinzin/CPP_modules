NAME	= weapon

CXX			= c++
CPPFLAGS= -Wall -Wextra -Werror -g -std=c++98

SRC				= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ				= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
				$(CXX) $(CPPFLAGS) $(OBJ) -o $@

clean:
				rm -f $(OBJ)

fclean: clean
				rm -f $(NAME)

re: fclean all