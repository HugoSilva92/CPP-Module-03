#include "ScavTrap.hpp"

int	main(void){
	ScavTrap teste("Bad-Boy");

	teste.attack("Alguem");
	std::cout << "O nome do ScavTrap e: " << teste.getName() << std::endl;
	std::cout << teste << std::endl;
	teste.attack("Good-boy");
	std::cout << teste.getDamage() << std::endl;
	teste.attack("Good-boy");
	std::cout << teste << std::endl;
	teste.guardGate();
}


/* 	ClapTrap teste("Bad-Boy");

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
	std::cout << teste << std::endl; */
