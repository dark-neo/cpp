
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

#include "family.hxx"

father::father()
{
	_dark_haired = true;
}

father::father(bool dark_haired)
{
	_dark_haired = dark_haired;
}

father::~father()
{
	_dark_haired = false;
	std::cout << std::endl << "Father's destructor called." << std::endl;
}

void
father::print_daddy()
{
	std::string dark_haired = std::string();

	std::cout << std::endl;
	std::cout << "-- Father attributes --" << std::endl;
	if (father::_dark_haired)
		dark_haired = std::string("YES");

	std::cout << "Is dark-haired: " << dark_haired << std::endl;
}

mother::mother()
{
	_blue_eyes = true;
	_big_boobs = true;
}

mother::mother(bool blue_eyes, bool big_boobs)
{
	_blue_eyes = blue_eyes;
	_big_boobs = big_boobs;
}

mother::~mother()
{
	_blue_eyes = false;
	_big_boobs = false;

	std::cout << std::endl << "Mother's destructor called." << std::endl;
}

void
mother::set_blue_eyes(bool blue_eyes)
{
	_blue_eyes = blue_eyes;
}

void
mother::set_big_boobs(bool big_boobs)
{
	_big_boobs = big_boobs;
}

bool
mother::has_blue_eyes()
{
	return _blue_eyes;
}

bool
mother::has_big_boobs()
{
	return _big_boobs;
}

void
mother::print_mommy()
{
	std::string blue_eyes;
	std::string big_boobs;

	std::cout << std::endl << "-- Mother attributes --" << std::endl;
	if (mother::has_blue_eyes())
		blue_eyes = std::string("YES :)");
	else
		blue_eyes = std::string("NO :(");

	if (mother::has_big_boobs())
		big_boobs = std::string("YES :)");
	else
		big_boobs = std::string("NO :(");

	std::cout << "Have blue-eyes?: " << blue_eyes << std::endl;
	std::cout << "Have big-boobs?: " << big_boobs << std::endl;
}

daughter::daughter() 
{
	_hot_girl = false;
}

daughter::daughter(bool hot_girl)
	: father(true), mother(true, true)
{
	_hot_girl = hot_girl;
}

daughter::~daughter()
{
	_hot_girl = false;
	std::cout << std::endl << "Daughter's destructor called." << std::endl;
}

void
daughter::set_hot_girl(bool hot_girl)
{
	_hot_girl = hot_girl;
}

bool
daughter::is_hot_girl()
{
	return _hot_girl;
}

void
daughter::print_members()
{
	std::string dark_haired = std::string();
	std::string hot_girl = std::string();

	std::cout << std::endl;
	std::cout << "--Daughter attributes --" << std::endl;
	if (daughter::is_hot_girl())
		hot_girl = std::string("YES");
	else
		hot_girl = std::string("NO");

	std::cout << "Is a cute-hotty girl?: " << hot_girl << std::endl;
}
