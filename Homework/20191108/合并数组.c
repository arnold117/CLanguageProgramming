#include<stdio.h>

int ls(char *p);

int main(void)
{
	char a[100], b[100], c[200];
	int d, e, n;
	
	printf("Please enter a string: \n");
	gets(a);
	d = ls(a);
	printf("Please enter another string: \n");
	gets(b);
	e = ls(b);
	
	for(n = 0; n < d; n++)
	{
		c[n] = a[n];
	}
	
	while(n < d + e)
	{
		c[n] = b[n -d];
		n = n + 1;
	}
	
	for(n = 0; n < d + e; n++)
	{
		printf("%c",c[n]);
	}
	
	return 0;
}

int ls(char *p)
{
	int i;
	
	for(i = 0; *p != '\0'; p++)
	{
		i++;
	}
	
	return i;
}
