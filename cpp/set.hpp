#ifndef SET_HPP
#define SET_HPP

#include "set-c/set.h"

class Set {
	private:
		struct set *s;

	public:
	Set();
	~Set();

	// create and destroy values in set
	int add(void *d, DATA_TYPE t);
	int del(void * d, DATA_TYPE t);


	// get length of set
	unsigned int length(); 

	// check if value is in set already
	int member(void *d, DATA_TYPE t);

	/*
	// returns a set that is the union of the two arguments
	struct set * set_union(struct set *s1, struct set *s2);

	// returns a set that is the intersection of the two arguments
	struct set * set_intersection(struct set *s1, struct set *s2);

	// returns a set that is the symetric difference of the two arguments
	struct set * set_symetric_diff(struct set *s1, struct set *s2);

	// returns a set that is the complement of A given B (A-B)
	struct set * set_complement(struct set *A, struct set *B);

	// returns true if A is a subset of B 
	int set_subset(struct set *A, struct set *B);
	*/
	// iterate a set: first-done-next idiom is implemented for use with for loop 
	// example:
	//    struct node *n;
	//    for(n=set_first(s); set_done(s); n = set_next(s)){
	/*
	struct node * set_first(struct set *);
	struct node * set_done(struct set *);
	struct node * set_next(struct set *);
	void * node_get_data(struct node *n);
	DATA_TYPE node_get_type(struct node *n);

	*/
	// prints value of items in the set
	void print();

	unsigned int num_adts();
	int add_adt(struct adt_funcs *f, DATA_TYPE dt);

};


#endif
