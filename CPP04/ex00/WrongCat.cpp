#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat called \n";
}

WrongCat::WrongCat( WrongCat& obj) : WrongAnimal(obj)
{
	this->_type = "WrongCat";
	std::cout << "Copy constructor WrongCat called \n";
}

WrongCat& WrongCat::operator=( WrongCat& obj)
{
	this->_type = "WrongCat";
	std::cout << "Asigment constructor WrongCat called \n";
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Miou!!!\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor wrong cat called !\n";
}