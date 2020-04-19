#include<stdio.h>

int prime(int a);

int main(int argc, char *argv[]) 
{
	int x, i = 2;
	
	printf("Please enter a value:");
	scanf("%d",&x);
	
	while(i<(x/2))
	{
		if(prime(i) == 1 && prime(x-i) == 1)
		{
			printf("%d,%d\n", i, x-i);
		}
		else
		{
			;
		}
		
		i++;
	}
	
	return 0;
}

int prime(int a)
{
	int i =2;
	
	if(a<2)
	{
		return 0;
	}
	
	while(i<a)
	{
		if(a%i == 0)
		{
			break;
		}
		
		i++;
	}
	
	if(a==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
