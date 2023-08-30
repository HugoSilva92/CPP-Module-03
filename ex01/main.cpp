#include "ScavTrap.hpp"

int	main(void){
	ScavTrap teste("Bad-Boy");

	teste.ScavAttack("Alguem");
	std::cout << "O nome do ClapTrap e: " << teste.getName() << std::endl;
	std::cout << "O nome do ScavTrap e: " << teste.ScavGetName() << std::endl;
	std::cout << teste << std::endl;
	teste.guardGate();
	teste.ScavAttack("Good-boy");
	teste.attack("Good-Boy");
	//teste.setDamage(15);
	std::cout << teste.ScavGetDamage() << std::endl;
	teste.ScavAttack("Good-boy");
	std::cout << teste << std::endl;
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
