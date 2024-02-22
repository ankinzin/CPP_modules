#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor Cat called \n";
}

Cat::Cat( Cat& obj) : Animal(obj)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(obj._brain->getIdea(i), i);
	std::cout << "Copy constructor Cat called \n";
}

Cat& Cat::operator=( Cat& obj)
{
	this->_type = "Cat";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(obj._brain->getIdea(i), i);
	std::cout << "Assignment constructor Cat called \n";
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaaoouu!!!\n";
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Destructor cat called !\n";
}

Brain* Cat::getBrain (void ) {
	return (this->_brain);
}