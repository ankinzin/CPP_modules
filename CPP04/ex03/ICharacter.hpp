#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP
# include "Amateria.hpp"
# include <iostream>

class Amateria;

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(Amateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif