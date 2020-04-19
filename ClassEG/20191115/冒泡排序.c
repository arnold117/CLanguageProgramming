#include<stdio.h>

#define N 8

void fun(int *p, int n);

int main(void)
{
	int a[N], i, *p;
	
	printf("Please enter %d values: ", N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	
/*	p = a;
	fun(p, N);
	
	for(p = a, i = 0; i < N; i++, p++)
	{
		printf("%d ", *p);
	}*/
	
	fun(a,N);
	
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}

void fun(int *p, int n)
{
	int i, j, k;
	
	for(i = 1; i < n; i++)
	{
		for(j = 0; j < n - i; j++)
		{
			if(p[j] > p[j + 1])
			{
				k = p[j];
				p[j] = p[j + 1];
				p[j + 1] = k;
			}
		}
	}
}
