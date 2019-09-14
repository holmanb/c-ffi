#include "set.hpp"
#include <iostream>

using namespace std;

int main(){
	Set *s = new Set;		// set_init
	int i = 1;
	double j = 1.0;
	char k = 'c';
	s->add(&i, INT);
	s->add(&j, DOUBLE);
	s->add(&k, CHAR);
	s->print();
	delete s;			// set_free
	return 0;
}
