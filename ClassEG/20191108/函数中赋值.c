#include<stdio.h>

void a1(int *x, int *y);

void main()
{
	int a, b;
	a1(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

void a1(int *x, int *y)
{
	*x = 3;
	*y = 4;
}
