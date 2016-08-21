
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

#include "family.hxx"

int
main()
{
	father fth1(true);
	mother mom1(true, true);
	daughter dau1(true);
	daughter dau2(false);

	std::cout << std::endl << "DAUGHTER #1";
	dau1.print_daddy();
	dau1.print_mommy();
	dau1.print_members();

	std::cout << std::endl << std::endl << "DAUGHTER #2";
	dau2.print_daddy();
	/* Change _big_boobs mother attribute */
	dau2.set_big_boobs(false);
	dau2.print_mommy();
	dau2.print_members();

	return (0);
}
