#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("none"), hitPoint(10), energyPoint(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoint(other.hitPoint), energyPoint(other.energyPoint), attackDamage(other.attackDamage) {
	std::cout << "ClapTrap " << name << " copy constructor" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap " << name << " operator =" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (energyPoint > 0 && hitPoint > 0) {
		energyPoint--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cerr << "ClapTrap " << name << "Error: NOT points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoint > 0) {
		hitPoint -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cerr << "ClapTrap " << name << "Error: NOT hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoint > 0 && hitPoint > 0) {
		energyPoint--;
		hitPoint += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
	}
	else
		std::cerr << "ClapTrap " << name << " Error: NOT points" << std::endl;
}
