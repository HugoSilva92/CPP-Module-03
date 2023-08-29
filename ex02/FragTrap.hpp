#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& obj);
	FragTrap& operator= (FragTrap const& obj);
	~FragTrap();
	void		highFiveGuys();
	void		FragAttack(const std::string& target);
	int			FragGetLife(void) const;
	int			FragGetEnergy(void) const;
	int			FragGetDamage(void) const;
	std::string	FragGetName(void) const;
};

#endif
