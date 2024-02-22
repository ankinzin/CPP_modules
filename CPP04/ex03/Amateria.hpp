#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class Amateria {
		protected:
			std::string _type;

		public :
			Amateria(std::string const & type);
			Amateria(Amateria const & obj);
			Amateria( void );
			virtual ~Amateria( void );

			std::string const & getType() const;

			virtual Amateria* clone() const = 0;
			virtual void use(ICharacter& target) = 0;
};

#endif