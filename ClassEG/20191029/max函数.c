#include<stdio.h>

int max(int x, int y);

int main(void)
{
	printf("%d\n", max(3,5));
	
	return 0;
}

int max(int x, int y)
{
	int t;
	
	if(x>y)
	{
		t = x;
	}
	else
	{
		t = y;
	}
	
	return t;
}
