#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name <<  "Inheritance constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " Inheritance destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (energyPoint > 0) {
		energyPoint--;
		std::cout << "ScavTrap " << name << " savagely attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cerr << "ScavTrap " << name << " Error: NOT enough energy points" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}