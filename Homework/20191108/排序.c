#include<stdio.h>

#define N 5

int sort(int a[], int i);

int main(void)
{
	int a[N], i, *p;
	 
	printf("Please enter %d numbers: ", N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	
	p = a;
	sort(p, N);
	
	for(p = a, i = 0; i < N; i++)
	{
		printf("%d ", *p);
		p++;
	}
	
	return 0;
}

int sort(int a[], int n)
{
	int i, j, temp;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else
			{
				;
			}
		}
	}
}
