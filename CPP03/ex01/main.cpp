#include "ScavTrap.hpp"

int	main ( void )
{
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                           CONSTRUCTORS                                                |\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	ScavTrap clap("Scav Noris");
	std::cout << "Movie values: \n";
	std::cout << "name : " << clap.getName() << "\n";
	std::cout << "Hit Points : " << clap.getHitPoints() << "\n";
	std::cout << "energy Points : " << clap.getEnergyPoints() << "\n";
	std::cout << "Attack Damage: " << clap.getAttackDamage() << "\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                           MEMBERS FUNCTIONS                                           |\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	clap.setAttackDamage(10);
	ClapTrap looser("Schwarzenegger");
	clap.attack("Schwarzenegger");
	looser.takeDamage(10);
	std::cout << "Damage after attack : " << clap.getHitPoints() << "\n";
	std::cout << "Schwarzenegger hit points after attack : " << looser.getHitPoints() << "\n";
	looser.setEnergyPoints(0);
	looser.setHitPoints(1);
	looser.beRepaired(20);
	looser.setEnergyPoints(2);
	looser.beRepaired(20);
	clap.guardGate();
	std::cout << "hitPoints of  Schwarzenegger after Medication " << looser.getHitPoints() << "\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	std::cout << "|                           DESTRUCTORS                                                 |\n";
	std::cout << "-----------------------------------------------------------------------------------------\n";
	return (0);
}
