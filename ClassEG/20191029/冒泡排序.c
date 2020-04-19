#include<stdio.h>
#define N 5 //宏定义，替换程序中常量N为5 

int main(void)
{
	int a[N], i, j, temp;
	
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
	
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
