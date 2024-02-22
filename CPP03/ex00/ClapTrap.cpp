#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& obj ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
}

ClapTrap& ClapTrap::operator=(ClapTrap &obj) {
	std::cout << "copy assignment operator called" << std::endl;
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamage = obj.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void ClapTrap::setHitPoints( int hit_points ) {
	this->_hitPoints = hit_points;
}

void ClapTrap::setEnergyPoints( int energy_points ) {
	this->_energyPoints = energy_points;
}

void ClapTrap::setAttackDamage( int attack_damage ) {
	this->_attackDamage = attack_damage;
}

const std::string ClapTrap::getName( void ) const {
	return this->_name;
}

const int ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

const int ClapTrap::getAttackDamage( void ) const {
	return this->_attackDamage;
}

const int ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

void ClapTrap::attack( const std::string &target ) {
	if (this->_hitPoints <= 0)
		std::cout << "Ur Dead Unfortunately" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "You dont have energy even to walk hence attack :(" << std::endl;
	else if(this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " Strikes ";
		std::cout << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_energyPoints -=1;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints <= 0)
		std::cout << "Bro is Dead" << std::endl;
	else if(this->_hitPoints - amount <= 0) {
		std::cout << "Oops! his Done with the last hit" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << amount << " damage taken" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_hitPoints <= 0)
		std::cout << "Already AFK" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "No energy to be fixed" << std::endl;
	else {
		std::cout << amount << " gained in medication" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}
