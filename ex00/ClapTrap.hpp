#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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
        void    setDamage(unsigned int damage);
        int     getLife(void) const;
        int     getEnergy(void) const;
        int     getDamage(void) const;
        std::string getName(void) const;
};

std::ostream & operator <<(std::ostream & out, ClapTrap const & mob);

#endif
