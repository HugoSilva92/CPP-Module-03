#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	private:

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& obj);
	ScavTrap& operator= (ScavTrap const& obj);
	~ScavTrap();
	void		guardGate();
	void		attack(const std::string& target);
	//unsigned int scavEnergy; variable that doesnt go to the Clap.
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &mob);

#endif
