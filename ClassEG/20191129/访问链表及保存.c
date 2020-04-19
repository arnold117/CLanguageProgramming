#include<stdio.h>
#include<stdlib.h>

#define LEN sizeof(struct student)

struct student
{
	int num;
	char name[30];
	struct student *next;
};

struct student *create();

int main(void)
{
	struct student *p, *head, *p1;
	int n;
	FILE *fp;
	char c;
	
	fp = fopen("d:\\dat1.dat", "rb");
	printf("Please enter link num: ");
	head = create();
	c = getchar();
	
	/*for (p = head; p != NULL; p = p->next)
	{
		gets(p->name);
	}*/
	
	for(p = head; p != NULL; p = p->next)
	{
		fread(p, LEN, 1, fp);
	}
	
	for (p = head; p != NULL; p = p->next)
	{
		printf("%d : %s\n", p->num, p->name);
	}
	
	return 0;
}

struct student *create()
{
	struct student *head, *p1, *p2;
	
	p1 = p2 = head = (struct student*)malloc(LEN);
	scanf("%d", &head->num); 
	p1 = (struct student * )malloc(LEN);
	scanf("%d", &p1->num);
	
	while(p1->num != 0)
	{
		p2->next = p1;
		p2 = p1;
		p1 = (struct student * )malloc(LEN);
		scanf("%d", &p1->num);
	}
	
	p2->next = NULL;

    free(p1);
	
	return head;
}
