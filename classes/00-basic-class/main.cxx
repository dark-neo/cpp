
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

#include "person.hxx"

int
main()
{
	person pers1;
	person pers2("Java", "Sucks");
	person *pers3 = new person("Name", "Surname");

	pers1.set_name("Goku");
	pers1.set_surname("God");

	pers1.print_members(1);
	pers2.print_members(2);
	pers3->print_members(3);
	
	delete pers3;

	return (0);
}
