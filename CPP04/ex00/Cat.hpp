#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
		public:
			Cat( void );
			Cat( Cat& obj );
			Cat& operator=( Cat& obj );
			virtual ~Cat( void );

			void makeSound( void ) const;
};

#endif