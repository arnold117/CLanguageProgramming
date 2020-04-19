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
	
	x1.next = &x2;
	x2.next = &x3;
	(*(x1.next)).num = 2;//x1.next point to x2, select the address of x1.next equals to x2.
	printf("%d\n", x2.num);
	
	return 0;
}
