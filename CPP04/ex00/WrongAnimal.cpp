#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	this->_type = "";
	std::cout << "Default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj) {
	this->_type = obj._type;
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &obj) {
	this->_type = obj._type;
	std::cout << "Assignment constructor WrongAnimal called" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal making sound" << std::endl;
}

const std::string WrongAnimal::getType( void ) const {
	return (this->_type);
}

void WrongAnimal::setType( std::string type ) {
	this->_type = type;
}