
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

#include "figure.hxx"

polygon::polygon(uint_t width, uint_t height)
{
	_width = width;
	_height = height;
}

polygon::~polygon()
{
}

void
polygon::print_area()
{
	std::cout << "Polygon area is: " << this->area() << std::endl;
}

/*
 * _rectangle_'s constructor calls constructor of base class and pass _rectagle_
 * arguments to _polygon_ constructor. _rectangle_'s constructor body is left
 * empty.
 */
rectangle::rectangle(uint_t a, uint_t b) 
	: polygon(a, b) {}

/*
 * NOTE: `base_class::atribute_of_base_class' notation is my own personal choice.
 * 	 You can use `atribute_of_base_class' only for typeless.
 */
uint_t
rectangle::area()
{
	return (polygon::_width * polygon::_height);
}

/*
 * Same rectangle's case. It's easy, right? :)
 */
triangle::triangle(uint_t a, uint_t b)
	: polygon(a, b)
{
}

uint_t
triangle::area()
{
	return ((polygon::_width * polygon::_height) / 2);
}
