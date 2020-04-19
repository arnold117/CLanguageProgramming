#include<stdio.h>
int main()
{
	float x,y;
	printf("Please enter the weight of the goods:");
	scanf("%f",&x);
	if(x>20)
	{
		y=1.3*x;
	}
	else
	{
		if(x>10)
		{
			y=1.2*x; 
		}
		else
		{
			if(x>5)
			{
				y=1.1*x;
			}
			else
			{
				y=x;
			}
		}
	}
	printf("You need to pay: %f dollars!",y);
	return 0;
}
