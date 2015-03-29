#include "heap.h"
#include "stdio.h"

int main(){

	Heap *hp = new_heap(12);
	
	
	insert_value(hp,10);
	insert_value(hp,9);
	insert_value(hp,8);
	insert_value(hp,7);
	insert_value(hp,6);
	
	for (int i = 0; i < 12; i++){
		printf("%d, ",hp->data[i]);
	}
	
	dispose_heap(hp);

return 0;
}