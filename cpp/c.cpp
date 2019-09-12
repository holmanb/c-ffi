#include "set.hpp"
#include <iostream>

using namespace std;

int main(){
	Set *s = new Set;		# set_init
	cout << "set created\n";

	delete s;			#set_free
	return 0;
}
