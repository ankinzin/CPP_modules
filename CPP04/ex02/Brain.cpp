#include "Brain.hpp"

Brain::Brain( void ) {
	int i = 0;
	while (i < 100) {
		this->ideas[i] = "Nothing in mind yet!";
		i++;
	}
	std::cout << "Default constructor Brain called !" << std::endl;
}

Brain::Brain( Brain& obj ) {
	int i = 0;
	while (i < 100) {
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	std::cout << "Copy constructor Brain called" << std::endl;
}

Brain& Brain::operator=( Brain &obj ) {
	int	i = 0;
	while (i < 100) {
		this->ideas[i] = obj.ideas[i];
		i++;
	}
	std::cout << "Assignment constructor Brain called" << std::endl;
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Destructor Brain called" << std::endl;
}

void Brain::setIdeas(std::string idea, int indice) {
	if (indice < 0 || indice >= 100) {
		std::cout << "Error : indice should be between 0 and 99" << std::endl;
		return;
	}
	this->ideas[indice] = idea;
}

const std::string Brain::getIdea(int indice) const {
	if (indice < 0 || indice >= 100) {
		std::cout << "Error: indice should be between 0 and 99" << std::endl;
		return "";
	}
	return this->ideas[indice];
}