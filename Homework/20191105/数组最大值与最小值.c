#include<stdio.h>

int main(void)
{
	int a[10], *p, *p1, *p2;
	
	printf("Please enter 10 values:");
	
	for(p = a; p < a + 10; p++)
	{
		scanf("%d",p);
	}
	
	p1 = a + 9;
	p2 = a + 1;
	
	for(p = a;p < a + 10;p++)
	{
		if(*p>*p1)
		{
			*p1 = *p;
		}
		else
		{
			if(*p < *p2)
			{
				*p2 = *p;
			}
			else
			{
				;
			}
		}
	}
	
	printf("Max = %d\n", *p1);
	printf("Min = %d\n", *p2);
} 
