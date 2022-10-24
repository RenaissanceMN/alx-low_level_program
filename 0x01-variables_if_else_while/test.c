#include <stdio.h>

int add(int)

int main(void)
{
	int x;
	
	x = 10;

	foo(x);

	printf("%d\n", x);

	return (0);
}

int add(int a)
{
	a = 20;
	return (a);
}
