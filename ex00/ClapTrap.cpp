#include "ClapTrap.hpp"

    ClapTrap::ClapTrap(){

    }

    ClapTrap::ClapTrap(std::string name){
        this->_name = name;
    }

    ClapTrap::ClapTrap(ClapTrap& obj){
        *this = obj;
    }

    ClapTrap& ClapTrap::operator= (ClapTrap const & obj){
        this->_name = obj._name;
        return (*this);
    }

    ClapTrap::~ClapTrap(){
        std::cout << "Deconstructor Called" << std::endl;
    }

    ClapTrap& ClapTrap::operator--(void){
        this->_HitPoints--;
        return *this;
    }

    void    ClapTrap::attack(const std::string& target){
        std::cout << "ClapTrap " << _name << " attacks "
                    << target << ", causing " << _AttackDamage
                    << " points of damage!" << std::endl;
    }
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
