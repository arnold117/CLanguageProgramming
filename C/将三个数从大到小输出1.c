//方法一：将三个数之间两两比较，判断是否需要交换位置
#include<stdio.h>
int main()
{
	int a,b,c,tmp;
	printf("Please enter values:	");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(a<c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b<c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("The order is: %d,%d,%d\n",a,b,c);
	return 0;
 } 
