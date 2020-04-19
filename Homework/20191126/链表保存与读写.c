#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define LEN sizeof(Stu)

typedef struct student
{
	int num;
	char name[30];
	struct student *next;
}Stu;

Stu *create();

Stu *create()
{
	Stu *p1, *p2, *head;
	int n;

	head = NULL;
	p1 = (Stu *)malloc(sizeof(Stu));
	scanf("%d", &p1->num);
	n = 0;

	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)
		{
			head = p2 = p1;
		}
		else
		{
			p2->next = p1;
			p2 = p1;
		}
		
		p1 = (Stu *)malloc(sizeof(Stu));
		scanf("%d", &p1->num);
	}
	
	p2->next = NULL;
	
	return head;
}

int main(void)
{
	Stu *p, *head;
	FILE *fp;

	char str[30];
	head = create();
	fp = fopen("d:\\dat1.dat", "wb+");
	printf("p->name:\n");
	p = head;

	while (p != NULL)
	{
		gets(p->name)
		p = p->next;
	}
	
	p = head;

	while (p != NULL)
	{
		fwrite(p, sizeof(Stu), 1, fp);
		p = p->next;
	}
	
	rewind(fp);
	p = head;

	while (p != NULL)
	{
		fread(p, sizeof(Stu), 1, fp);
		p = p->next;
	}
	
	p = head;

	while (p != NULL)
	{
		printf("%d, %s\n", p->num, p->name);
		p = p->next;
	}
	
	fclose(fp);

	return 0;
}