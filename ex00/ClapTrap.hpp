#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& obj);
        ClapTrap& operator= (ClapTrap const & obj);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
