#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	{
		Brain brain;
		std::cout << "Brain idea " << brain.getIdea(0) << "\n";
		std::cout << "Brain idea " << brain.getIdea(-1);
		std::cout << "Brain idea " << brain.getIdea(100);
		brain.setIdeas("New idea", 0);
		std::cout << "Brain idea " << brain.getIdea(0) << "\n";
		std::cout << "\n-------------------------------------\n";
	}
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "\n-------------------------------------\n";
	{
		Dog* dog_1 = new Dog();
		Dog* dog_2 = new Dog();
		Dog* dog_3;
		std::cout << dog_1->getType() << " " << std::endl;
		std::cout << "**** Dog_1 brain ****\n";
		for (int i = 0; i < 5; i++)
			std::cout << dog_1->getBrain()->getIdea(i) << "\n";
		dog_2->getBrain()->setIdeas("CPP isn't a bad language", 0);
		dog_2->getBrain()->setIdeas("CPP is good, but i prefer JS", 1);
		dog_2->getBrain()->setIdeas("Yes, Because i wanna be a Javascript Developer", 2);
		std::cout << "\n**** Dog_2 brain ****\n";
		for (int i = 0; i < 5; i++)
			std::cout << dog_2->getBrain()->getIdea(i) << "\n";
		std::cout << "\n** Assign Dog_2 to dog_3 ***\n";
		dog_3 = dog_2;
		std::cout << "\n**** Dog_3 brain after assignment ****\n";
		for (int i = 0; i < 5; i++)
			std::cout << dog_3->getBrain()->getIdea(i) << "\n";
		delete dog_1;
		delete dog_2;
	}
	return 0;
}