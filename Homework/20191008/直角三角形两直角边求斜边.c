#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	double z;
	printf("请键入直角三角形两直角边x,y:");
	scanf("%f,%f",&x,&y);
	z=x*x+y*y;
	z=sqrt(z);
	printf("斜边长度为:%f\n",z);
	return 0;
}
