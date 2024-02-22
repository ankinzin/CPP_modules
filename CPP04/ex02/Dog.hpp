#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
		private:
			Brain *_brain;
		public:
			Dog( void );
			Dog( Dog& obj );
			Dog& operator=( Dog& obj );
			virtual ~Dog( void );

			void makeSound( void ) const;
			Brain* getBrain( void );

};

#endif