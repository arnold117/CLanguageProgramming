#include<stdio.h>

void fun1(int *p, int n);

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i; 
	
	fun1(a, 10);
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

void fun1(int *p, int n)
{
	int *p1, *p2, t;
	
	p1 = p, p2 = p + 9;
	
	for(p1 = p, p2 = p + 9; p1 < p2; p1++, p2--)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
	} 
}
