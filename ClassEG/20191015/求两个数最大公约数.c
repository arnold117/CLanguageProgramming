#include<stdio.h>
int main()
{
	int a, b;
	printf("Please enter values a,b:");
	scanf("%d,%d",&a,&b);
	while(a%b != 0)
	{
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	printf("The max common divisor is %d\n",b);
	return 0;
}
