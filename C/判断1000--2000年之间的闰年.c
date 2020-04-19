#include<stdio.h>
int main()
{
	int year;
	for(year=1000;year<=2000;year++)
	{
		 if((year%4==0 && year%100!=0) ||(year%400==0))
		printf("%d	",year);
	}
	printf("\n");
	return 0;
}
