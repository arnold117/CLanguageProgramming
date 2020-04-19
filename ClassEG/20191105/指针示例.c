#include<stdio.h>
#include<conio.h>

int main(void)
{
	int a, b, t;
	int *p1, *p2, *p;
	
	a = 3;
	b = 4;
	p1 = &a;
	p2 = &b; getch();
	printf("%d, %d, %d, %d\n", a, b, *p1, *p2);
	t = a;
	a = b;
	b = t; getch();//a,b值互换 
	printf("%d, %d, %d, %d\n", a, b, *p1, *p2);
	t = *p1;
	*p1 = *p2;
	*p2 = t; getch();//a,b值互换 
	printf("%d, %d, %d, %d\n", a, b, *p1, *p2);
	p = p1;
	p1 = p2;
	p2 = p; getch();//p1指向b，p2指向a 
	printf("%d, %d, %d, %d\n", a, b, *p1, *p2);
	
	return 0;
}
