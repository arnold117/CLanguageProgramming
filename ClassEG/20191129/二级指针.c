#include<stdio.h>

void fun(int (*p)[4], int n);

int main(void)
{
	int a[3][4], i, j;
	
	printf("Please enter a[3][4]\n");
	fun(a, 3);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%10d", a[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}

void fun(int (*p)[4], int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//scanf("%d", &p[i][j]);
			//scanf("%d", p[i] + j);
			scanf("%d", *(p + i) + j);
		}
	}
}
