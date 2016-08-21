
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

/*
 * Polymorphism example
 */

#ifndef FIGURE_HXX
#define FIGURE_HXX

#include <iostream>

/* i386: 32-bit unsigned integer */
#define uint_t unsigned int


/*
 * _polygon_ is an abstract class. The abstract class in C++ is always defined
 * by any method name set to zero. This is:
 *	any_method_in_my_class() = 0;
 *
 * This class only serves to inherit and cannot be instanciate. But, you can
 * use a pointer to abstract class to do polymorphism.
 *
 * See _main.cxx_ to further details.
 */
class polygon {
protected:
	uint_t _width;
	uint_t _height;
public:
	polygon(uint_t, uint_t);
	/* 
	 * ~polygon() and area() are virtual pure methods. MUST BE OVERRIDEN/
	 * IMPLEMENTED on derived class.
	 *
	 * With this form, C++ knows that polygon is an abstract class :)
 	 * (very ugly xD)
	 * 
	 * You can do this with ANY method on class excepts constructors.
	 * (only with 1 method set to zero is OK, but I write two to learn you
	 * that it can be done.
	 */
	virtual ~polygon() = 0;
	virtual uint_t area() = 0;
	void print_area();
};

class rectangle : public polygon {
public:
	rectangle(uint_t, uint_t);
	uint_t area();		/* override from base class */
};

class triangle : public polygon {
public:
	triangle(uint_t, uint_t);
	uint_t area();		/* override from base class */
};

#endif /* FIGURE_HXX */
