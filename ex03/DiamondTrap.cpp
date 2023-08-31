#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->_name = "Default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

//Couldnt get the values from both parents as the construction of them is in order of call
//So the only way was too input the values by hand.
//I think thats why they ask us to use the attack from the ScavTrap class.
//It could be done by other way, but I think its the same but with extra steps:
//https://stackoverflow.com/questions/73024572/make-a-child-class-inherit-specific-attributes-from-two-different-parent-classes

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
	this->_name = name;
	/*	this->_EnergyPoints = ScavTrap::scavEnergy;
	this->_HitPoints = FragTrap::fragHitPoints;
	this->_AttackDamage = FragTrap::fragAttack;*/
	//this is a way to do it, by declaring other variables that arent going to get from the parent.
	this->_EnergyPoints = 50;
	this->_HitPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "DiamondTrap Parameter Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& obj) : ClapTrap(obj), FragTrap(obj), ScavTrap(obj){
	*this = obj;
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const& obj){
	std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	ClapTrap::_name = obj._name + "_clap_name";
    this->_name = obj._name;
    this->_AttackDamage = obj._AttackDamage;
    this->_EnergyPoints = obj._EnergyPoints;
    this->_HitPoints = obj._HitPoints;
    return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}


void	DiamondTrap::attack(std::string target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "Claptrap name is: " << ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::dGetName(void) const {
	return this->_name;
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &mob)
{
    out << std::endl;
    out << "Name: " << mob.dGetName() << std::endl;
    out << "Attack Damage: " << mob.getDamage() << std::endl;
    out << "Energy left: " << mob.getEnergy() << std::endl;
    out << "Life left: " << mob.getLife() << std::endl;
    return out;
}
