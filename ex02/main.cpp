#include "FragTrap.hpp"

int	main() {
	ClapTrap ct("CT");
	FragTrap ft1("FT1");
	FragTrap ft2("FT2");

	ct.attack("CT");
	ft1.attack("FT1");
	ft2.attack("FT2");

	return 0;
}
