#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (this->_hitPoints <= 0)
		std::cout << "Bro is Dead" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "No energy to do shit" << std::endl;
	else
		std::cout << "High Five request sent" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Destructor called" << std::endl;
}