#include <stdio.h>

int isbool(int a);
int not(int a);
int or(int a, int b);
int and(int a, int b);

int main()
{
	int a = 0;
	int b = 1;

	printf("%d %d %d %d %d\n", a, b, not(a), or(a,b), and(a,b));

	return 0;
}

int isbool(int a)
{
	if(a == 0 || a == 1) {
		return 1;
	} else {
		return 0;
	}
}

int not(int a)
{
	if(!isbool(a)) return -1;
	return !(a);
}

int and(int a, int b)
{
	if(!(isbool(a) && isbool(b))) return -1;
	return a && b;
}

int or(int a, int b)
{
	if(!(isbool(a) && isbool(b))) return -1;
	return a || b;
}
