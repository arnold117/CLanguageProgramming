#include<stdio.h>

int max(int *p, int n, int *t);

int main(void)
{
	int m;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	max(a, 10, &m);
	printf("Max = %d !", m);
	
	return 0;
}

int max(int *p, int n, int *t)
{
	int i;
	*t = p[0];
	for(i = 1; i < n; i++)
	{
		if(*t < p[i])
		{
			*t = p[i];
		}
	}
}
