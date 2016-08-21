
/*
 * Copyright (c) 2014 dark_neo
 * All rights reserved.
 */

/*
 * Header file with class declaration.
 */

#ifndef PERSON_HXX
#define PERSON_HXX

/* Standard C++ libraries goes here */
#include <iostream>
#include <string>

class person {
private:
	std::string _name;
	std::string _surname;
public:
	/* Default constructor. */
	person();
	/* Overload constructor. */
	person(std::string, std::string);
	/* Destructor */
	~person();

	/* Set and get methods */
	void set_name(std::string);
	void set_surname(std::string);
	std::string get_name();
	std::string get_surname();

	/* Write on stdout the members value */
	void print_members(unsigned char);
};
#endif /* PERSON_HXX */
