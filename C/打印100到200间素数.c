#include<stdio.h>
int main()
{
	int i;
	for (i=100;i<=200;i++)
	{
		int j;
		for (j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i == j)
		printf("%d	",i);
	}
	printf("\n");
}
