#include<stdio.h>
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int i;
	int max = arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		max = arr[i];
	}
	printf("max = %d\n",max);
	return 0;
}
