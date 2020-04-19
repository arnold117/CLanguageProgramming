#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delt;
	double x1,x2;
	printf("Please enter a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("ALL!");
			}
			else
			{
				printf("NONE!"); 
			}
		}
		else
		{
			float d;
			d = -c/b;
			printf("Root is %f!",d);
		}
	}
	else
	{
		delt = b*b-4*a*c;
		double temp;
		temp = sqrt(delt);
		if(delt<0)
		{
			temp = sqrt(-delt);
			x1 = -b/(2*a);
			x2 = temp/(2*a);
			printf("Roots are %f + i * %f and %f - i * %f !",x1,x2,x1,x2);
		}
		else
		{
			x1 = (-b+temp)/(2*a);
			x2 = (-b-temp)/(2*a);
			printf("Roots are %f and %f !",x1,x2);
		}
	}
	return 0;
}
