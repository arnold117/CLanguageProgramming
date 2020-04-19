#include<stdio.h>
#include<conio.h>

int main(void)
{
	char str[100];
	char *p;
	int i;
	
	printf("Please enter a string:");
	gets(str);
	puts(str);getch();
	p = str;
	
/*	i = 0;
	
	while(*p != '\0')
	{
		i++;
		p++;
	}*/
	
	for(i = 0; *p != '\0'; p++)//第三个语句可以不必写 
	{
		i++;
	}
	
	printf("Your string have the lenght of %d !", i);
	
	return 0;
}
