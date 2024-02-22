#include "Ice.hpp"

Ice::Ice( void ) : Amateria()
{
	this->_type = "ice";
	std::cout << "Ice default constructor called!\n";
}

Ice::Ice(Ice const & obj) : Amateria()
{
	*this = obj;
	std::cout << "Ice copy constructor called!\n";
}

Ice & Ice::operator=(Ice const & obj)
{
	*this = obj;
	return (*this);
	std::cout << "Ice asigment constructor called! \n";
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called! \n";
}

Ice * Ice::clone( void ) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*\n";
}