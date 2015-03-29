#include "heap.h"
#include <stdlib.h>
#include <stdio.h>


Heap *new_heap(int length){
	Heap *hp = malloc(sizeof(Heap));
	hp->data = malloc(sizeof(int)*length);
	hp->length = length;
	hp->heap_size = 0;
	return hp;
}

void dispose_heap(Heap *hp){
	free(hp->data);
	free(hp);
}

void heapifyUp(Heap *hp, int pos){
  int parent = ((pos+1)/2)-1;
  while(pos > 0 && hp->data[pos] < hp->data[parent]){
    int temp = hp->data[parent];
    hp->data[parent] = hp->data[pos];
    hp->data[pos] = temp;
    pos = parent;
    parent = ((pos+1)/2)-1;
  }
}


void insert_value(Heap *hp, int value){
	if (hp->heap_size < hp->length){
		hp->data[hp->heap_size] = value;
		
		if (hp->heap_size > 0)
		  heapifyUp(hp, hp->heap_size);
		
		hp->heap_size++;
	}
}