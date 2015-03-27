#include "heap.h"
#include "stdlib.h"


Heap *new_heap(int size){
	Heap *hp = malloc(sizeof(Heap));
	hp->data = malloc(sizeof(int)*size);
	hp->size = size;
	hp->used = 0;
	return hp;
}

void dispose_heap(Heap *hp){
	free(hp->data);
	free(hp);
}

void insert_value(Heap *hp, int value){
	if (hp->used < hp->size){
		hp->data[hp->used] = value;
		hp->used++;
	}
}