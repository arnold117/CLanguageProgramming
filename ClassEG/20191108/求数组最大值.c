#include<stdio.h>

int max(int *p, int n);

int main(void)
{
	int b;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	b = max(a,10);
	printf("%d", b);
	
	return 0;
}

int max(int *p, int n)
{
	int *p1, t;
	for(p1 = p, t = *p1; p1 < p + n; p1++)
	{
		if(t < *p1)
		{
			t = *p1;
		}
	}
	return t;
}
