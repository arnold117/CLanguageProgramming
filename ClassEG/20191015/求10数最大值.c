#include<stdio.h>
int main()
{
	int x, max, i;
	printf("请键入10个数，以空格间隔:");
	scanf("%d", &x);
	max = x;
	for(i=0;i<9;i++)
	{
		scanf("%d",&x);
		if(x>max)
		{
			max = x;
		}
		else
		{
			;
		}
	}
	printf("Max is %d!\n", max);
	return 0;
}
