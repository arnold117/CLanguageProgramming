#include<stdio.h>

struct student
{
	int num;
	char name[30];
};

int main(void)
{
	int i;
	struct student x[3];
	
	printf("Please enter 3 strings:");
	
	for(i = 0; i < 3; i++)
	{
		x[i].num = i + 1;
		gets(x[i].name);
	}
	
	for( i = 0; i < 3; i++)
	{
		printf("%d %s\n", x[i].num, x[i].name);
	}
	
	return 0;
}
