#include "Cure.hpp"

Cure::Cure( void ) : Amateria()
{
	this->_type = "cure";
	std::cout << "Cure default constructor called!\n";
}

Cure::Cure(Cure const & obj) : Amateria()
{
	*this = obj;
	std::cout << "Cure copy constructor called!\n";
}

Cure & Cure::operator=(Cure const & obj)
{
	*this = obj;
	return (*this);
	std::cout << "Cure asigment constructor called! \n";
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called! \n";
}

Cure * Cure::clone( void ) const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}