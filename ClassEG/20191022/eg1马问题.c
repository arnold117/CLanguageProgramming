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
				printf("����%dƥ,����%dƥ,С��%.0fƥ\n",x,y,z);
			}
			
			y++;
		}
		
		x++;
	}
	
	return 0;
}
