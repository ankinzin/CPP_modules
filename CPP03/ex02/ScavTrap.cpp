#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate( void ) {
	if (this->_hitPoints <= 0)
		std::cout << "Bro is Kaputt" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "No energy to do shit" << std::endl;
	else
		std::cout << "ScavTrap is now in recovery" << std::endl;
}
