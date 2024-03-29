#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor Dog called \n";
}

Dog::Dog( Dog& obj) : Animal(obj)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(obj._brain->getIdea(i), i);
	std::cout << "Copy constructor Dog called \n";
}

Dog& Dog::operator=( Dog& obj)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(obj._brain->getIdea(i), i);
	std::cout << "Asigment constructor Dog called \n";
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Wooof!!! \n";
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Destructor Dog called !\n";
}

Brain* Dog::getBrain (void )
{
	return (this->_brain);
}