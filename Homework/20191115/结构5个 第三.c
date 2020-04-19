#include<stdio.h>

int main(void)
{
	struct student
	{
		int num;
		char name[30];
	};
	
	struct student x[5];
	int i;
	
	printf("Please enter 5 names: ");
	
	for(i = 0; i < 5; i++)
	{
		x[i].num = i +1;
		gets(x[i].name); 
	}
	
	for( i = 0; i < 5; i++)
	{
		printf("%d %s\n", x[i].num, x[i].name);
	}
	
	printf("The 3rd name is %s!", x[2].name);
	
	return 0;
}
