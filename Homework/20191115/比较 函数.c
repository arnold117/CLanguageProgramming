#include<stdio.h>

int compares(char *p1, char *p2);

int main(void)
{
	char a[100], b[100];
	int i;
	
	printf("Please enter a string: ");
	gets(a);
	printf("Please enter another string: ");
	gets(b);
	i = compares(a, b);
	
	if(i == 1 || i == 0 || i == -1)
	{
		if(i == 1)
		{
			printf("%s is bigger!", a);
		}
		else
		{
			if(i == 0)
			{
				printf("Equal!");
			}
			else
			{
				printf("%s is bigger!", b);
			}
		}
	}
	else
	{
		;
	}
	
	return 0;
}

int compares(char *p1, char *p2)
{
	while(*p1 != '\0' && *p2 != '\0')
	{
		if(*p1 != *p2)
		{
			if(*p1 > *p2)
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		
		p1++;
		p2++;
	}
	
	if(*p1 == *p2)
	{
		return 0;
	}
}
