#include <stdio.h>
#include "array.h"

int main()
{
	Array test;
	init(&test);

	insert(&test, 1, 5);
	insert(&test, 1, 4);
	insert(&test, 3, 10);

	for(int i = 1; i <= 3; i++) {
		printf("%d ", at(&test, i));
	}
	printf("\n");

	delete(&test, 2);

	for(int i = 1; i <= 2; i++) {
		printf("%d ", at(&test, i));
	}
	printf("\n");

	return 0;
}
