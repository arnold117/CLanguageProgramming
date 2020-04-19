#include<stdio.h>

struct student
{
	int num;
	char name[30];
	struct student *next;
};

int main(void)
{
	int i;
	struct student x1, x2, x3, *p;
	
	p = &x1;
	p -> next = &x2;
	p = p -> next;
	p -> next = &x3;
	p = p -> next;
	p -> next = NULL;
	
	for(p = &x1; p != NULL; p = p -> next)
	{
		scanf("%d", &p -> num);//(*p).num = p -> num, 需要取地址 
	}
	
	//(*(x1.next)).num = 2;
	
	for(p = &x1; p != NULL; p = p -> next)
	{
		printf("%d\n", p -> num);
	}
	
	//printf("%d\n", x2.num);
	
	return 0;
}
