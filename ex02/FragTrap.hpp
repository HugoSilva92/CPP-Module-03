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
	void		highFiveGuys(void);
	void		attack(const std::string& target);
};

std::ostream	&operator<< (std::ostream &out, FragTrap const& mob);

#endif
