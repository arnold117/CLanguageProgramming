#include<stdio.h>

int main(void)
{
	char c;
	int a, b, d;
	
	printf("Please enter a c b:");
	scanf("%d %c %d", &a, &c, &b);
	
	switch(c)
	{
		case '+':
			d = a + b;
			break;
		case '-':
			d = a - b;
			break;
		case '*':
			d = a * b;
			break;
		case '/':
			d = a / b;
			break;
		default:
			break;
	}
	
	printf("%d %c %d = %d", a, c, b, d);
	
	return 0;
}
