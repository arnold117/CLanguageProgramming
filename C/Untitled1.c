#include<stdio.h>

int main(int argv, char* argc[])
{
	int count = 1;
	
	for (int i = 6; i > 0; i--)
	{
		count *= i;
	}
	
	printf("%d", count);
	
	int i = 6;
	while (i > 0)
	{
		count *=i;//count = count * i;
		i--;
	}
	
	return 0;
}
