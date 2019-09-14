#include <iostream>

#include "set.hpp"
#include "set-c/set.h"


Set::Set():s(0){
	this->s = set_init();
}
Set::~Set(){
	set_free(this->s);
}

// add user defined data types via this function
int Set::add(void *d, DATA_TYPE t){
	return set_add(this->s,  d,  t);
}

int Set::del(void *d, DATA_TYPE t){
	return set_delete(this->s,  d,  t);
}

// get length of set
unsigned int Set::length(){
	return set_length(this->s); 
}

// check if value is in set already
int Set::member(void *d, DATA_TYPE t){
	return set_member(this->s, d, t);
}

// returns a set that is the union of the two arguments
//	struct set * set_union(struct set *s1, struct set *s2);
//
//	// returns a set that is the intersection of the two arguments
//	struct set * set_intersection(struct set *s1, struct set *s2);
//
//	// returns a set that is the symetric difference of the two arguments
//	struct set * set_symetric_diff(struct set *s1, struct set *s2);
//
//	// returns a set that is the complement of A given B (A-B)
//	struct set * set_complement(struct set *A, struct set *B);
//
//	// returns true if A is a subset of B 
//	int set_subset(struct set *A, struct set *B);
//
//
//	// iterate a set: first-done-next idiom is implemented for use with for loop 
//	// example:
//	//    struct node *n;
//	//    for(n=set_first(s); set_done(s); n = set_next(s)){
//	struct node * set_first(struct set *);
//	struct node * set_done(struct set *);
//	struct node * set_next(struct set *);
//	void * node_get_data(struct node *n);
//	DATA_TYPE node_get_type(struct node *n);
//

//	// prints value of items in the set
void Set::print(){
	set_print(this->s);
}

unsigned int Set::num_adts(){
	return set_num_adts(this->s);
}

int Set::add_adt(struct adt_funcs *f, DATA_TYPE dt){
	return set_add_adt(this->s,f,dt);
}
//int  set_add_adt(struct set *, struct adt_funcs *, DATA_TYPE dt);  // note: this may change to support more than just an equality function
