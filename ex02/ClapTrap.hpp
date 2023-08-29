#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    // Needed to change to protected so my child class can access to it,
    // otherwise I cant use the variables in the child.
    // https://stackoverflow.com/questions/224966/what-is-the-difference-between-private-and-protected-members-of-c-classes
    protected:
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
