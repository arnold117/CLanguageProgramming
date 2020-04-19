#include<stdio.h>
#define N 5 //宏定义，替换程序中常量N为5 

int main(void)
{
	int a[N], i, j, temp, c, b[N+1];
	
	printf("Pease enter %d values:",N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
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
	
	printf("Your string is :");
	
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nPlease enter a value you want to instert:");
	scanf("%d", &c);
	
	for(i=0;i<N;i++)
	{
		b[i] = a[i];
	}
	
	b[N] = c;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(b[j]>b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
			else
			{
				;
			}
		}
	}
	
	for(i=0;i<N+1;i++)
	{
		printf("%d ",b[i]);
	}
	
	return 0;
}
