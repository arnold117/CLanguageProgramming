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
	int i, t;
	t = p[0];
	for(i = 1; i < n; i++)
	{
		if(t < p[i])
		{
			t = p[i];
		}
	}
	return t;
}
