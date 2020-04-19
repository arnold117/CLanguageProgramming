#include<stdio.h>

int main(void)
{
	int i, imax = 0, imin = 0, a[10];
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]>a[imax])
		{
			imax=i;
		}
		else
		{
			if(a[i]<a[imin])
			{
				imin=i;
			}
			else
			{
				;
			}
		}
	}
	
	printf("Max a[%d]=%d\n",imax,a[imax]);
	printf("Min a[%d]=%d\n",imin,a[imin]);
	
	return 0;
}
