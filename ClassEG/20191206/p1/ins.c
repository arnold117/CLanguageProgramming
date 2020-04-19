#include"listp1.h"

struct student* ins(struct student* head, struct student* p)
{
	struct student* p1, * p2;

	if (p->num < head->num)
	{
		p->next = head;
		head = p;

		return head;
	}
	else
	{
		p1 = p2 = head;
		p1 = p1->next;

		while (p1 != NULL)
		{
			if (p->num > p2->num&& p->num < p1->num)
			{
				p2->next = p;
				p->next = p1;

				return head;
			}

			p2 = p1;
			p1 = p1->next;
		}

		if (p->num > p2->num)
		{
			p2->next = p;
			p->next = NULL;
		}
		else
		{
			printf("Existed value!\n");
		}

		return head;
	}
}