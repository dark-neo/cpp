
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

class father {
private:
	bool _dark_haired;
public:
	father();
	father(bool);
	~father();
	void print_daddy();
};

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
	void print_mommy();
};

/* C++ FEATURE: MULTIPLE INHERITANCE */
class daughter : public father, public mother {
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
