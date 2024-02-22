#ifndef ICE_HPP
# define ICE_HPP
# include "Amateria.hpp"
# include "ICharacter.hpp"

class Ice : public Amateria {
public:
	Ice( void );
	Ice( Ice const & obj);
	Ice & operator=(Ice const & obj);
	~Ice( void );

	Ice * clone( void ) const;
	void	use(ICharacter& target);
};

#endif