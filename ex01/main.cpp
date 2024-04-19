#include "ScavTrap.hpp"

int	main() {
	ClapTrap ct("CT");
	ScavTrap st1("ST1");
	ScavTrap st2("ST2");

	ct.attack("CT");
	st1.attack("ST1");
	st2.attack("ST2");

	st1.guardGate();
	st2.guardGate();

	return 0;
}
