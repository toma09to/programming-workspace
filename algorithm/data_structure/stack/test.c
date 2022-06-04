#include <stdio.h>
#include "stack.h"

int main()
{
	Stack test;
	clearstack(&test);

	push(&test, 1);
	push(&test, 5);
	push(&test, 10);

	printf("%d\n", pop(&test));

	push(&test, 50);

	for(int i = 0; i < 3; i++) {
		printf("%d\n", pop(&test));
	}

	return 0;
}
