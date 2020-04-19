#include<stdio.h>

int main(void)
{
	char a[100], b[100], *p1, *p2;
	
	printf("Please enter a string: ");
	gets(a);
	printf("Please enter another string: ");
	gets(b);
	p1 = a;
	p2 = b;
	
	while(*p1 != '\0' && *p2 != '\0')
	{
		if(*p1 != *p2)
		{
			if(*p1 > *p2)
			{
				printf("%s is bigger!", a);
			}
			else
			{
				printf("%s is bigger!", b);
			}
			
			break;
		}
		
		p1++;
		p2++;
	}
	
	if(*p1 == *p2)
	{
		printf("Equal!");
	}
	
	return 0;
}
