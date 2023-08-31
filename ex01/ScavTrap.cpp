#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	std::cout << "ScavTrap Default constructor called" << std::endl;
};

//to the child class give a name to the parent class:
//https://cplusplus.com/forum/beginner/144422/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_AttackDamage = 20;
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap Copy assignement operator called" << std::endl;
	this->_name = obj._name;
	this->_AttackDamage = obj._AttackDamage;
	this->_EnergyPoints = obj._EnergyPoints;
	this->_HitPoints = obj._HitPoints;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now on Gate Keep Mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << _name << " attacks "
			  << target << ", causing " << _AttackDamage
			  << " points of damage!" << std::endl;
	this->_EnergyPoints--;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &mob)
{
	out << std::endl;
	out << "Name: " << mob.getName() << std::endl;
	out << "Attack Damage: " << mob.getDamage() << std::endl;
	out << "Energy left: " << mob.getEnergy() << std::endl;
	out << "Life left: " << mob.getLife() << std::endl;
	return out;
}
