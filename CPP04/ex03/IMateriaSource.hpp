#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP
# include "Amateria.hpp"
# include <iostream>

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(Amateria* tmp) = 0;
	virtual Amateria* createMateria(std::string const & type) = 0;
};

#endif