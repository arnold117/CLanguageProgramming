#include<stdio.h>

int *fun(int *a, int n, int t);

int main(void)
{
	int a[8] = { 12, 23, 25, 31, 35, 42, 51, 63 }, t;
	
	printf("Please enter a value: ");
	scanf("%d", &t);
	
	if(fun(a, 8, t) != NULL)
	{
		printf("a[%d] = %d\n", fun(a, 8, t) - a, t);
	}
	else
	{
		printf("NOT FOUND!\n");
	}
	
	return 0;
}

int *fun(int *a, int n, int t)
{	
	int *b;
	
	for(b = a; a < b + n; a++)
	{
		if(*a == t)
		{
			return a;
		}
	}
	
	return NULL;
}
