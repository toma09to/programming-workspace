#include <stdio.h>
#include <math.h>

double newton_method(double x, int n)
{
	for(int i = 0; i < n; i++) {
		x = x - tan(x);
		printf("%lf\n", x);
	}

	return x;
}

int main()
{
	printf("%lf", newton_method(3.0,10));
	return 0;
}
