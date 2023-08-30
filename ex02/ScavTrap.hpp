#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	private:

	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& obj);
	ScavTrap& operator= (ScavTrap const& obj);
	~ScavTrap();
	void		guardGate();
	void		ScavAttack(const std::string& target);
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &mob);

#endif
