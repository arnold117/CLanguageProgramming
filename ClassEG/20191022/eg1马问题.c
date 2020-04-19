#include<stdio.h>
int main(void)
{
	int x, y;
	float z;
	
	x = 0;
	
	while(x<50)
	{
		y = 0;
		
		while(y<100-x)
		{
			z = 100-x-y;
			
			if(2*x+y+z/2==100)
			{
				printf("大马%d匹,中马%d匹,小马%.0f匹\n",x,y,z);
			}
			
			y++;
		}
		
		x++;
	}
	
	return 0;
}
