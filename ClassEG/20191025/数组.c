#include<stdio.h>
int main(void)
{
	char str[100]={"how"};
	//int i;
	
	printf("Please enter a string:");
	//gets(str);
	scanf("%s",str);
	str[6] = '\0';
	//puts(str);
	printf("%s",str);
	
	return 0;
}
