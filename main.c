#include "heap.h"
#include "stdio.h"

int main(){

	Heap *hp = new_heap(12);
	
	
	insert_value(hp,15);
	insert_value(hp,16);
	insert_value(hp,17);
	insert_value(hp,18);
	insert_value(hp,19);
	insert_value(hp,20);
	insert_value(hp,17);
	insert_value(hp,17);
	insert_value(hp,17);
	insert_value(hp,17);
	insert_value(hp,17);
	insert_value(hp,454);
	
	for (int i = 0; i < 12; i++){
		printf("%d, ",hp->data[i]);
	}
	
	dispose_heap(hp);

return 0;
}