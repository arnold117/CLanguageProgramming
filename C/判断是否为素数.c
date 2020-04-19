#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Please enter a number:");
	scanf("%d",&x);
	
	for(y=2;y<x;y++)
	{	
		if(x%y==0)
		break;
	}
	
	if(y==x)
	{
		printf("%d is a prime number\n",x);
	}
	else
	{
		printf("%d is not a prime number\n",x);
	}
	
	return 0;
}
