#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int prime(int a);

int main(int argc, char *argv[]) 
{
	int x, i = 2;
	
	printf("Please enter a value:");
	scanf("%d",&x);
	
	while(i<(x/2))
	{
		if(prime(i) == 1 && prime(x-i) == 1)
		{
			printf("%d,%d\n", i, x-i);
		}
		else
		{
			;
		}
		
		i++;
	}
	
	return 0;
}
