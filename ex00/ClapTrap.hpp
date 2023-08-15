#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _HitPoints = 10;
        unsigned int    _EnergyPoints = 10;
        unsigned int    _AttackDamage = 0;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& obj);
        ClapTrap& operator= (ClapTrap const & obj);
        ClapTrap& operator--(void);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
