#include "ScavTrap.hpp"

int	main() {
	ScavTrap scavtrap1("CT1");
	ScavTrap scavtrap2("CT2");

	scavtrap1.attack("CT2");
	scavtrap2.takeDamage(3);
	scavtrap2.status();

	scavtrap2.beRepaired(5);
	scavtrap2.status();

	scavtrap1.attack("CT2");
	scavtrap2.takeDamage(2);
	scavtrap1.status();
	scavtrap2.status();

	return 0;
}
