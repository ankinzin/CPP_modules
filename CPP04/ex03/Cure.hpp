#ifndef CURE_HPP
# define CURE_HPP
# include "Amateria.hpp"
# include "ICharacter.hpp"

class Cure : public Amateria {
public:
	Cure( void );
	Cure( Cure const & obj);
	Cure & operator=(Cure const & obj);
	~Cure( void );

	Cure * clone( void ) const;
	void	use(ICharacter& target);
};

#endif