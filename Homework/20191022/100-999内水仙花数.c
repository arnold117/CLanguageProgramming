#include<stdio.h>
int main()
{
	int x,y,z,n;
	x=1;
	y=0;
	z=0;
	while(x<10)
	{
		y = 0;
		while(y<10)
		{
			z = 0;
			while(z<10)
			{
				n = 100*x+10*y+z;
				if(x*x*x+y*y*y+z*z*z == n)
				{
					printf("%d\n",n);
				}
				else
				{
					;
				}
				z = z+1;
			}
			y = y+1;
		}
		x = x+1;
	}
	return 0;
}
