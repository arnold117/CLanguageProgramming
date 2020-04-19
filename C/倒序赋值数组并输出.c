#include<stdio.h>

int main(void)
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, * p, b[10], i;
	
	p = a;
	
	for (i = 9; i >= 0; i--)
	{
		b[i] = *p;
		p++;
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	
	return 0;
}
