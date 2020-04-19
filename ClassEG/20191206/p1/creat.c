#include"listp1.h"

Stu* creat()
{
	Stu* head, * p1, * p2;

	p1 = p2 = head = (Stu*)malloc(sizeof(Stu));
	printf("Please enter a value:\n");
	scanf("%d", &head->num);
	p1 = (Stu*)malloc(sizeof(Stu));
	scanf("%d", &p1->num);

	while (p1->num != 0)
	{
		p2->next = p1;
		p2 = p1;
		p1 = (Stu*)malloc(sizeof(Stu));
		scanf("%d", &p1->num);
	}

	p2->next = NULL;

	free(p1);

	return head;
}