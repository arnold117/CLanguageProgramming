#include<stdio.h>
#include<math.h>

int main(void)
{
	double r,pi,v;
	
	printf("please enter r:");
	scanf("%lf",&r);
	pi = 4*atan(1);
	//v = pow(r,3)*pi*(4/3);
	v = (4.0/3.0)*pow(r,3)*pi;
	printf("V = %lf!",v);
	
	return 0;
 } 
