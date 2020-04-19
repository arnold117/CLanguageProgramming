#include<stdio.h>
int main()
{
	int x,y,z;
	printf("请键入两数值:");
	scanf("%d,%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("%d,%d",x,y);
	return 0;
}
