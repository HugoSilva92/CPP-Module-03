#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//Diamond inheritance, problem that the grandchild class is going to get two grandparent consctructors
//https://www.makeuseof.com/what-is-diamond-problem-in-cpp/
//The link above solves that issue.

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& obj);
		DiamondTrap& operator=(DiamondTrap const& obj);
		~DiamondTrap();
		void	diamondAttack(std::string target);
		void	whoAmI(void);
		std::string dGetName(void) const;
		//using ScavTrap::ScavAttack; found out late about this, but does the same as the diamondAttack function!
};

std::ostream	& operator<<(std::ostream & out, DiamondTrap const& mob);

#endif

