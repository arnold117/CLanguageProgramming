#include<stdio.h>

int main(void)
{
	int a[10], i, b[10];
	
	printf("Please enter values:");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		b[i] = a[9-i];
	}
	
	for(i=0;i<10;i++)
	{
		a[i] = b[i];
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}
