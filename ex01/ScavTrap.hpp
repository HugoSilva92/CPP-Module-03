#ifndef SCAVTRAP_H
#define SCAVTRAP_H

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
	int			ScavGetLife(void) const;
	int			ScavGetEnergy(void) const;
	int			ScavGetDamage(void) const;
	std::string	ScavGetName(void) const;
};

std::ostream &operator<<(std::ostream &out, ScavTrap const &mob);

#endif
