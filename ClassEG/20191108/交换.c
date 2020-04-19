#include<stdio.h>

void swap1(int x, int y);
void swap2(int *x, int *y);
void swap3(int *x, int *y);

void main()
{
	int a = 3, b = 4;
	swap1(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	swap3(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

void swap1(int x, int y)
{
	int t;
	
	t = x;
	x = y;
	y = t;
}

void swap2(int *x, int *y)
{
	int *p;
	
	p = x;
	x = y;
	y = p;
}

void swap3(int *x, int *y)
{
	int t;
	
	t = *x;
	*x = *y;
	*y = t;
}

