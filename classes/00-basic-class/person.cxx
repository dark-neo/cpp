
/*
 * Copyright (c) 2014 dark_neo
 * All rights reserved.
 */

#include "person.hxx"

/*
 * Default constructor.
 * Does nothing. Only initializes attibutes to their null values by type.
 */
person::person()
{
	/* 
	 * NOTE: NEVER, NEVER use _NULL_ or _nullptr_ on std::string:
	 * This examples BREAKS your beautiful code:
	 *	std::string s = nullptr;
	 *	std::string s2 = NULL;		CODE BOOOOM :(
	 */
	_name = "";			/* Empty strings */
	_surname = "";
}

/*
 * Overload constructor.
 * Copy news values of _name_ and _surname_ arguments to their corresponding
 * attributes.
 */
person::person(std::string name, std::string surname)
{
	_name = name;
	_surname = surname;
}

/*
 * Destructor.
 * Set members to null.
 */
person::~person()
{
	/* 
	 * NOTE: NEVER, NEVER use _NULL_ or _nullptr_ on std::string:
	 * This examples BREAKS your beautiful code:
	 *	std::string s = nullptr;
	 *	std::string s2 = NULL;		CODE BOOOOM :(
	 */
	_name = "";			/* Empty strings */
	_surname = "";
}

/*
 * Setters & Getters. Nothing to explain. :)
 */
void
person::set_name(std::string name)
{
	_name = name;
}

void
person::set_surname(std::string surname)
{
	_surname = surname;
}

std::string
person::get_name()
{
	return _name;
}

std::string
person::get_surname()
{
	return _surname;
}

void
person::print_members(unsigned char pers_num)
{
	std::cout << std::endl << "-- PERSON #" << (int) pers_num 
		<< " DATA --" << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Surname: " << _surname << std::endl;
}
