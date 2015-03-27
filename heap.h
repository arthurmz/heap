#ifndef HEAP_H
#define HEAP_H

typedef struct{
	int* data;
	int size;
	int used;
} Heap;

Heap *new_heap(int size);
void insert_value(Heap* hp, int value);

#endif