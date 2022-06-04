#include <stdio.h>

union int_float
{
	unsigned int i;
	float f;
};

int main()
{
	union int_float num;
	num.f = 3.14;
	printf("%d\n", num.i); 

	return 0;
}
