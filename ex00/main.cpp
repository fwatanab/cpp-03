#include "ClapTrap.hpp"
int	main() {
	ClapTrap claptrap1("CT1");
	ClapTrap claptrap2("CT2");

	claptrap1.attack("CT2");
	claptrap2.takeDamage(3);
	claptrap2.status();

	claptrap2.beRepaired(5);
	claptrap2.status();

	claptrap1.attack("CT2");
	claptrap2.takeDamage(2);
	claptrap1.status();
	claptrap2.status();

	return 0;
}
