#include<stdio.h>

int main(void)
{
	char str[100];
	char *p;
	int i;
	
	printf("Please enter a string:");
	gets(str);
	p = str;
	i = 0;
	
	while(*p != '\0')
	{
		i++;
		p++;
	}
	
	printf("Your string have the lenght of %d !", i);
	
	return 0;
}
