#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << "Inheritance constructor" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << "Inheritance destructor" << std::endl;
}
