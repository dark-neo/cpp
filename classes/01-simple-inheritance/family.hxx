
/*
 * Copyright (c) 2014 dark_neo
 * All right reserved.
 */

/*
 * Simple inheritace example
 */

#ifndef FAMILY_HXX
#define FAMILY_HXX

#include <iostream>
#include <string>

class mother {
private:
	bool _blue_eyes;
	bool _big_boobs;
public:
	mother();
	mother(bool, bool);
	~mother();
	void set_blue_eyes(bool);
	void set_big_boobs(bool);
	bool has_blue_eyes();
	bool has_big_boobs();
	void print_members();
};

/*
 * Uncomment the next (and comment `class daughter : public mother {' to see
 * how inherits works. If _daughter_ inherits _mother_, then _daughter_ can see
 * public methods/properties of _mother_ and call his public methods/properties
 * on her own class (see family.cxx->:daughter::print_members() to see how
 * achieve this.
 */
/*
class daughter {
 */
class daughter : public mother {
private:
	bool _hot_girl;
public:
	daughter();
	daughter(bool);
	~daughter();
	void set_hot_girl(bool);
	bool is_hot_girl();
	void print_members();
};

#endif /* FAMILY_HXX */
