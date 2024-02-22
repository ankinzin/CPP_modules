#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal {
		private:
			Brain *_brain;
		public:
			Cat( void );
			Cat( Cat& obj );
			Cat& operator=( Cat& obj );
			virtual ~Cat( void );

			void makeSound( void ) const;
			Brain* getBrain( void );
};

#endif