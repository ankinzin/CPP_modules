#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal {
		protected:
			std::string _type;

		public:
			WrongAnimal( void );
			WrongAnimal( WrongAnimal& obj );
			WrongAnimal& operator=( WrongAnimal& obj );
			virtual ~WrongAnimal( void );

			virtual void makeSound( void ) const;
			const std::string getType( void ) const;
			void setType( std::string type );
};

#endif