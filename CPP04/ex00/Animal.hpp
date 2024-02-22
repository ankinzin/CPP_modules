#ifndef ANIMAL_HPP
#define ANIMAL_HPP
# include <iostream>

class Animal {
		protected:
			std::string _type;

		public:
			Animal( void );
			Animal( Animal& obj );
			Animal& operator=( Animal& obj );
			virtual ~Animal( void );

			virtual void makeSound( void ) const;
			const std::string getType( void ) const;
			void setType( std::string type );
};

#endif