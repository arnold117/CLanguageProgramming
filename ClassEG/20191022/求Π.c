#include<stdio.h>
#include<math.h>

int main(void)
{
	double n, m, x, pi;
	
	n = 1;
	m = 1;
	x = n/m;
	
	for(pi=0;fabs(x)>pow(10,-6);x=n/m)
	{
		pi = pi+x;
		n = -n;
		m = m+2;
		//getch(); printf("pi=%lf,n=%lf,m=%lf,x=%lf\n",pi,n,m,x);
	}
	
	printf("pi = %lf",4*pi);
	
	return 0;
}
