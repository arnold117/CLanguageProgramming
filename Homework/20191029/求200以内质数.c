#include<stdio.h>

int main(void)
{
	int x, y;
	
	for(x=2;x<200;x++)
	{
		for(y=2;y<x;y++)
		{	
			if(x%y==0)
			break;
		}
		
		if(x==y)
		{
			printf("%d\n",x);
		}
	}
	
}
