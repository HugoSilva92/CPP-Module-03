#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	ScavTrap Scav("Bad-Boy");
	FragTrap Frag("Helper");

	Scav.attack("Alguem");
	Frag.attack("Amigo de Alguem");
	std::cout << "O nome do ScavTrap e: " << Scav.getName() << std::endl;
	std::cout << "O nome do FragTrap e: " << Frag.getName() << std::endl;
	std::cout << Scav << std::endl;
	std::cout << Frag << std::endl;
	Scav.guardGate();
	Frag.highFiveGuys();
/* 	Scav.guardGate();
	Scav.ScavAttack("Good-boy");
	Scav.attack("Good-Boy");
	//Scav.setDamage(15);
	std::cout << Scav.ScavGetDamage() << std::endl;
	Scav.ScavAttack("Good-boy");
	std::cout << Scav << std::endl; */
}


/* 	ClapTrap Scav("Bad-Boy");

	Scav.attack("Good-boy");
	std::cout << Scav << std::endl;
	Scav.takeDamage(2);
	std::cout << Scav << std::endl;
	Scav.takeDamage(2);
	std::cout << Scav << std::endl;
	Scav.takeDamage(2);
	std::cout << Scav << std::endl;
	Scav.takeDamage(2);
	std::cout << Scav << std::endl;
	Scav.takeDamage(2);
	std::cout << Scav << std::endl;
	Scav.attack("Good-boy");
	std::cout << Scav << std::endl;
	Scav.attack("Good-boy");
	std::cout << Scav << std::endl;
	Scav.beRepaired(2);
	std::cout << Scav << std::endl;
	Scav.attack("Good-boy");
	std::cout << Scav << std::endl;
	Scav.setDamage(15);
	Scav.attack("Good-boy");
	std::cout << Scav << std::endl; */
