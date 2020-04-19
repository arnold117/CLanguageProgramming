#include<stdio.h>
#define N 5 //�궨�壬�滻�����г���NΪ5 

int main(void)
{
	int a[N], i, j, temp, b;
	
	printf("Pease enter %d values:",N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Please enter a value you want to search:");
	scanf("%d",&b);
	
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
		if(a[j]==b)
		{
			printf("a[%d]=%d\n",j,a[j]);
		}
		//printf("%d ",a[i]);
	}
	
	return 0;
}
