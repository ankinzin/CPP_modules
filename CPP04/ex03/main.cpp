#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		std::cout << "-------Test Character----------\n";
		Character _char("Ronaldo");
		std::cout << "\n-----TEST Cure-----------\n";
		Cure cure;
		cure.use(_char);
		std::cout << "Type : " << cure.getType() << "\n";
		Amateria * cure2 = cure.clone();
		std::cout << "Type : " << cure2->getType() << "\n";
		std::cout << "\n-----TEST Ice-----------\n";
		Ice ice;
		ice.use(_char);
		std::cout << "Type : " << ice.getType() << "\n";
		Amateria * ice2 = ice.clone();
		std::cout << "Type : " << ice2->getType() << "\n";
		std::cout << "\n-----Destruction-----------\n";
		delete ice2;
		delete cure2;
	}
	{
		std::cout << "----------Second Part Test---------\n";
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		Amateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;

	}
	return 0;
}