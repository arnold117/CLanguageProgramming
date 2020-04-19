#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n);

int main(int argc, char *argv[]) 
{
	int n, m;
	
	printf("Please enter a value:");
	scanf("%d",&n);
	m = fun(n);
	printf("%d! = %d.", n, m);
	
	return 0;
}
