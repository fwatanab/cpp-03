#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " Inheritance constructor" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " Inheritance destructor" << std::endl;
}

void	FragTrap::attack(const std::string& target) {
	if (energyPoint > 0) {
		energyPoint--;
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cerr << "FragTrap " << name << " Error: NOT enough energy points" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name <<  "requests high fives guys!" << std::endl;
}
