#include "ClapTrap.hpp"

int	main(void){
	ClapTrap teste("Bad-Boy");

	teste.attack("Good-boy");
	teste.takeDamage(2);
	teste.takeDamage(2);
	teste.takeDamage(2);
	teste.takeDamage(2);
	teste.takeDamage(2);
	teste.attack("Good-boy");
	teste.attack("Good-boy");
	teste.beRepaired(2);
	teste.attack("Good-boy");
	teste.attack("Good-boy");
}
