#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
    std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_name = obj._name;
    this->_AttackDamage = obj._AttackDamage;
    this->_EnergyPoints = obj._EnergyPoints;
    this->_HitPoints = obj._HitPoints;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor Called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_EnergyPoints == 0)
    {
        std::cout << _name << " is out of energy points" << std::endl;
        return;
    }
    else if (this->_HitPoints <= 0)
    {
        std::cout << _name << " is broken, needs to be repaired" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks "
              << target << ", causing " << _AttackDamage
              << " points of damage!" << std::endl;
    this->_EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_EnergyPoints == 0)
    {
        std::cout << _name << " is out of energy points" << std::endl;
        return;
    }
    else if (this->_HitPoints <= 0)
    {
        std::cout << _name << " is broken, needs to be repaired" << std::endl;
        return;
    }
    this->_HitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took: "
              << amount << " of damage"
              << ", remained " << _HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoints == 0)
    {
        std::cout << _name << " is out of energy points" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repaired: "
              << amount << " of hit points" << std::endl;
    this->_HitPoints += amount;
    this->_EnergyPoints--;
}

void ClapTrap::setDamage(unsigned int damage)
{
    this->_AttackDamage = damage;
}

int ClapTrap::getDamage(void) const
{
    return this->_AttackDamage;
}

int ClapTrap::getEnergy(void) const
{
    return this->_EnergyPoints;
}

int ClapTrap::getLife(void) const
{
    return this->_HitPoints;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &mob)
{
    out << std::endl;
    out << "Name: " << mob.getName() << std::endl;
    out << "Attack Damage: " << mob.getDamage() << std::endl;
    out << "Energy left: " << mob.getEnergy() << std::endl;
    out << "Life left: " << mob.getLife() << std::endl;
    return out;
}
