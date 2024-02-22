#include "Animal.hpp"

Animal::Animal( void ) {
	this->_type = "";
	std::cout << "Default constructor Animal called" << std::endl;
}

Animal::Animal(Animal &obj) {
	this->_type = obj._type;
	std::cout << "Copy constructor Animal called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Destructor Animal called" << std::endl;
}

Animal& Animal::operator=(Animal &obj) {
	this->_type = obj._type;
	std::cout << "Assignment constructor Animal called" << std::endl;
	return (*this);
}

void Animal::makeSound( void ) const {
	std::cout << "Animal making sound" << std::endl;
}

const std::string Animal::getType( void ) const {
	return (this->_type);
}

void Animal::setType(std::string type) {
	this->_type = type;
}