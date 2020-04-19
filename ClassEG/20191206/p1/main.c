#include"listp1.h"


int main(void)
{
	Stu* head, * p, * p1;

	printf("input num:\n");
	head = creat();
	p1 = (struct student*)malloc(sizeof(Stu));
	scanf("%d", &p1->num);
	head = ins(head, p1);

	for (p = head; p != NULL; p = p->next)
	{
		printf("%d\n", p->num);
	}

	for (p = head; p != NULL; p = p->next)
	{
		printf("%d\n", p->num);
	}

	return 0;
}