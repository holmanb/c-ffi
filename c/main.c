#include "stdlib.h"
#include "stdio.h"
#include "set-c/set.h"
int main(){
	struct set *s = set_init();
	int i = 1;
	double j = 1.0;
	char k = 'c';
	set_add(s, &i, INT);
	set_add(s, &j, DOUBLE);
	set_add(s, &k, CHAR);
	set_print(s);

	set_free(s);
	return 0;
}
