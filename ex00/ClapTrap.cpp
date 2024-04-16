#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0) {}

ClapTrap::~ClapTrap() {}

void	ClapTrap::attack(const std::string& target) {
	if (energyPoint > 0) {
		energyPoint--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cerr << "Error: NOT enough energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	hitPoint -= amount;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoint > 0) {
		energyPoint--;
		hitPoint += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
	}
	else
		std::cerr << "Error: NOT enough energy points" << std::endl;
}

void	ClapTrap::status() {
	std::cout << "name: " << name << std::endl;
	std::cout << "Hit Point: " << hitPoint << std::endl;
	std::cout << "Energy Point: " << energyPoint << std::endl;
	std::cout << "Attack Damage: " << attackDamage << std::endl << std::endl;
}
