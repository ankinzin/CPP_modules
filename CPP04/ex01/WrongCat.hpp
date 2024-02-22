#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	WrongCat( WrongCat& obj );
	WrongCat& operator=( WrongCat& obj );
	virtual ~WrongCat( void );

	void makeSound( void ) const;
};

#endif
