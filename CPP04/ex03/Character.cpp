#include "Character.hpp"

Character::Character(void)
{
	this->_name = "Unknow";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called \n";
}

Character::Character(Character const & obj)
{
	*this = obj;
	std::cout << "Character copy constructor called \n";
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character constructor with name called \n";
}

Character& Character::operator=(Character const & obj)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i];
	this->_name = obj._name;
	std::cout << "Character Assigment copy constructor called \n";
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	std::cout << "Character Destructor called \n";
}

std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(Amateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx]->use(target);
}