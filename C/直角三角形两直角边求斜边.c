#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	double z;
	printf("�����ֱ����������ֱ�Ǳ�x,y:");
	scanf("%f,%f",&x,&y);
	z=x*x+y*y;
	z=sqrt(z);
	printf("б�߳���Ϊ:%f\n",z);
	return 0;
}
