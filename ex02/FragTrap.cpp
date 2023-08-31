#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap Default constructor" << std::endl;
	this->_name = "default";
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap Parameter Constructor" << std::endl;
	this->_name = name;
	this->_AttackDamage = 30;
	this->_EnergyPoints = 100;
	this->_HitPoints = 100;
}

FragTrap::FragTrap(FragTrap& obj) : ClapTrap(obj){
	std::cout << "FragTrap Copy Constructor" << std::endl;
	*this = obj;
}
FragTrap &FragTrap::operator= (FragTrap const& obj){
	this->_name = obj.getName();
	this->_HitPoints = obj.getLife();
	this->_EnergyPoints = obj.getEnergy();
	this->_AttackDamage = obj.getDamage();
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor" << std::endl;
}

void		FragTrap::highFiveGuys(void){
	std::cout << "Can I get a awesome HIGH-FIVE?" << std::endl;
}

void		FragTrap::attack(const std::string& target){
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
	std::cout << "FragTrap " << _name << " attacks "
			  << target << ", causing " << _AttackDamage
			  << " points of damage!" << std::endl;
	this->_EnergyPoints--;
}

std::ostream	&operator<< (std::ostream &out, FragTrap const& mob){
	out << std::endl;
	out << "Name: " << mob.getName() << std::endl;
	out << "Attack Damage: " << mob.getDamage() << std::endl;
	out << "Energy left: " << mob.getEnergy() << std::endl;
	out << "Life left: " << mob.getLife() << std::endl;
	return out;
}
