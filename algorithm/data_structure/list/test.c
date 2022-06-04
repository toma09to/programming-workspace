#include <stdio.h>
#include "list.h"

int main()
{
	List *listhead;
	init(&listhead);

	inserthead(&listhead, 4);
	List *previous = listhead;
	inserthead(&listhead, 5);

	insert(previous, 10);
	insert(previous, 20);
	insert(previous, 30);

	delete(previous);
	deletehead(&listhead);

	List *p = listhead;
	for(int i = 0; i < 3; i++) {
		printf("%d\n", p -> element);
		p = p -> next;
	}

	return 0;
}
