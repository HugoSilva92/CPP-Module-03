#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& obj);
	FragTrap& operator= (FragTrap const& obj);
	~FragTrap();
	void		highFiveGuys(void);
	void		attack(const std::string& target);
	/* unsigned int	fragHitPoints;			variables that dont go to ClapTrap.
	unsigned int	fragAttack; */
};

std::ostream	&operator<< (std::ostream &out, FragTrap const& mob);

#endif
