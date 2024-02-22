#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
	this->_type = "Cat";
	std::cout << "Default constructor Cat called" << std::endl;
}

Cat::Cat( Cat& obj ) : Animal(obj) {
	this->_type = "Cat";
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(Cat &obj) {
	this->_type = "Cat";
	std::cout << "Assignment constructor Cat called" << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meeaaoouuw" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Destructor Cat called" << std::endl;
}