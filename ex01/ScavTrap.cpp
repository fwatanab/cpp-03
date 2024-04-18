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
