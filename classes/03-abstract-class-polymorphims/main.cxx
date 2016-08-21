
/*
 * Copyright (c) 2014 sergio_cruz
 * All right reserved.
 */

#include "figure.hxx"

int
main()
{
	/* Abstract classes cannot be instantiated. Compile error. BUUUM! */
	/*
	polygon p0;
	*/

	/* 
	 * Polymorphism. _polygon_ ___pointer___ (not an instance) can be like
	 * _rectangle_ or _triangle_ objects.
	 */
	polygon *p1 = new rectangle(5, 4);
	polygon *p2 = new triangle(5, 4);

	rectangle p3 = rectangle(6, 4);
	triangle p4 = triangle(7, 4);

	/*
	 * If you try:
	 * 	rectangle p3 = polygon(20, 100);
	 * will generate compile error because abstract classes cannot be
	 * instantiated.
	 */

	p1->print_area();
	p2->print_area();

	p3.print_area();
	p4.print_area();

	delete p2;
	delete p1;

	return (0);
}
