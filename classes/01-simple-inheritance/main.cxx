
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

#include "family.hxx"

int
main()
{
	mother mom1(true, true);
	daughter dau1(true);
	daughter dau2(false);

	std::cout << std::endl << "DAUGTHER #1";
	dau1.print_members();

	std::cout << std::endl << "DAUGTHER #2";
	dau2.print_members();

	return (0);
}
