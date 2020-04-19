#include<stdio.h>
int main()
{
	int x,y,n;
	y=0;
	printf("Please enter value:");
	scanf("%d",&x);
	for(n=0;n<5;n++)
	{
		y = y+x%10;
		x=x/10;
	}
	printf("%d",y);
	return 0;
}
