#include<stdio.h>
#include<conio.h>

int main(void)
{
	int a[10];
	int *p;
	
	printf("Please enter 10 values:");
	
	for(p = a; p < a + 10; p++)
	{
		scanf("%d", p);
		//printf("%d ", *p);
	}//结束时p指向数组外一地址 
	
	/*for(i = 0, p = a; i < 10; i++)
	{
		scanf("%d", a+i);  //p+i,&p[i](从地址p开始的第i+1个元素)
	}*/ 
	
	//指针让数组倒序
	int *p1, *p2;
	int i;
	
	for(p1 = a, p2 = a + 9; p1 < p2; p1++, p2--)
	{
		i = *p1;
		*p1 = *p2;
		*p2 = i;
	} 
	
	for(p = a; p < a +10; p++)//输出倒序后数组 
	{
		printf("%d ", *p);
	}
	
	return 0;
}
