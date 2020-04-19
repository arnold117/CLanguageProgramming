#include<stdio.h>

int min(int *p, int n, int *t, int *c);

int main(void)
{
	int m, n;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	min(a, 10, &m, &n);
	printf("Min is a[%d] = %d !", n, m);
	
	return 0;
}

int min(int *p, int n, int *t, int *c)
{
	int i;
	
	*t = p[0];
	*c = i;
	
	for(i = 10; i < n; i--)
	{
		if(*t > p[i])
		{
			*t = p[i];
			*c = i;
		}
	}
	
}
