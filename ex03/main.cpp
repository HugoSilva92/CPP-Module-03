#include "DiamondTrap.hpp"

int	main(void){
//	ScavTrap Scav("Bad-Boy");
//	FragTrap Frag("Helper");
	DiamondTrap Diamond("Son");

/* 	Scav.ScavAttack("Alguem");
	Frag.FragAttack("Amigo de Alguem");
	std::cout << "O nome do ScavTrap e: " << Scav.getName() << std::endl;
	std::cout << "O nome do ClapTrap pai do Scav e: " << Scav.getName() << std::endl;
	std::cout << "O nome do FragTrap e: " << Frag.getName() << std::endl;
	std::cout << "O nome do ClapTrap pai do Frag e: " << Frag.getName() << std::endl; */
	std::cout << Diamond << std::endl;
	Diamond.whoAmI();
	Diamond.ScavAttack("Someone");
	std::cout << std::endl;
	Diamond.ScavAttack("Someone");
/*	std::cout << Scav << std::endl;
	std::cout << Frag << std::endl;
	Scav.guardGate();
	Frag.highFiveGuys();
 	Scav.guardGate();
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
