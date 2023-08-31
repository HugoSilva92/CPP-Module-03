#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap Diamond("Son");
	/*DiamondTrap second(Diamond);
	DiamondTrap copy;

	copy = second;*/
	std::cout << "I'm the first one: " << Diamond << std::endl;
	Diamond.whoAmI();
	std::cout << std::endl;
	/*std::cout << "I'm the second one: " << second << std::endl;
	second.whoAmI();
	std::cout << std::endl;
	std::cout << "I'm the copy one: " << copy << std::endl;
	copy.whoAmI();
	std::cout << std::endl;

	std::cout << std::endl;*/
	Diamond.diamondAttack("Someone");
	/*std::cout << std::endl;
	second.diamondAttack("Someone");
	std::cout << std::endl;
	copy.diamondAttack("Someone");*/
	Diamond.highFiveGuys();
	std::cout << std::endl;
}
