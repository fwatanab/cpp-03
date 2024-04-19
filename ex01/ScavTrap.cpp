#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "Inheritance constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Inheritance destructor" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (energyPoint > 0) {
		energyPoint--;
		std::cout << "ScavTrap " << name << " savagely attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cerr << "Error: NOT enough energy points" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}
