#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
	this->_type = "Dog";
	std::cout << "Default constructor Dog called" << std::endl;
}

Dog::Dog( Dog& obj ) : Animal(obj) {
	this->_type = "Dog";
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(Dog &obj) {
	this->_type = "Dog";
	std::cout << "Assignment constructor Dog called" << std::endl;
	return (*this);
}

void Dog::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Destructor Dog called" << std::endl;
}