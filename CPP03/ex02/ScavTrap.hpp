#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

		public:
			ScavTrap( void );
			ScavTrap( std::string name );
			void guardGate( void );
			~ScavTrap( void );
};

#endif
