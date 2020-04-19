#include<stdio.h>

int main(void)
{
	char c;
	int srw = 0;
	int letters = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	
	printf("Please enter a string: ");	

	while((c=getchar())!='\n')
	{
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letters++;
		}
		else
		{
			if(' ' == c)
			{
				space++;
			}
			else
			{
				if(c >= '0' && c <= '9')
				{
					digit++;
				}
				else
				{
					other++;						
				}
			}
		}
	}
	
	srw = space + 1;
	printf("The string contains %d words!", srw);
	
	return 0;
}


