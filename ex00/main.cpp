#include "ClapTrap.hpp"

int	main(void){
	ClapTrap teste("Bad-Boy");

	teste.attack("Good-boy");
	std::cout << teste << std::endl;
	teste.takeDamage(2);
	std::cout << teste << std::endl;
	teste.takeDamage(2);
	std::cout << teste << std::endl;
	teste.takeDamage(2);
	std::cout << teste << std::endl;
	teste.takeDamage(2);
	std::cout << teste << std::endl;
	teste.takeDamage(2);
	std::cout << teste << std::endl;
	teste.attack("Good-boy");
	std::cout << teste << std::endl;
	teste.attack("Good-boy");
	std::cout << teste << std::endl;
	teste.beRepaired(2);
	std::cout << teste << std::endl;
	teste.attack("Good-boy");
	std::cout << teste << std::endl;
	teste.setDamage(15);
	teste.attack("Good-boy");
	std::cout << teste << std::endl;
}
