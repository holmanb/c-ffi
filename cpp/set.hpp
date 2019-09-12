#ifndef SET_HPP
#define SET_HPP

class Set {
	private:
		struct set *s;

	public:
	Set();/*  {
		std::cout<<"creating set\n";	
		this->s = set_init();
	}*/
	~Set();/*{
		std::cout<<"deleting set\n";	
		set_free(this->s);
	}
	// add user defined data types via this function
	int  set_add_adt(struct set *, struct adt_funcs *, DATA_TYPE dt);  

	// malloc and free
	struct set * set_init(void);
	void set_free(struct set * s);

	// create and destroy values in set
	int set_add(struct set *s, void *d, DATA_TYPE t);
	int set_delete(struct set * s, void * d, DATA_TYPE t);


	// get length of set
	unsigned int set_length(struct set * s); 
	// check if value is in set already
	int set_member(struct set *s, void *d, DATA_TYPE t);

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


	// iterate a set: first-done-next idiom is implemented for use with for loop 
	// example:
	//    struct node *n;
	//    for(n=set_first(s); set_done(s); n = set_next(s)){
	struct node * set_first(struct set *);
	struct node * set_done(struct set *);
	struct node * set_next(struct set *);
	void * node_get_data(struct node *n);
	DATA_TYPE node_get_type(struct node *n);

	// prints value of items in the set
	void set_print(struct set *s);

	unsigned int set_num_adts(struct set *s);

*/
};


#endif
