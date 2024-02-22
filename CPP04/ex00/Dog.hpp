#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
		public:
			Dog( void );
			Dog( Dog& obj );
			Dog& operator=( Dog& obj );
			virtual ~Dog( void );

			void makeSound( void ) const;
};

#endif