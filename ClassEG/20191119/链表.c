//(struct student * )malloc(sizeof(struct student));

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


struct student *create()
{
	struct student *head, *p1, *p2;
	
	p1 = p2 = head = (struct student*)malloc(LEN);
	printf("Please enter a value:\n");
	scanf("%d", &head -> num); 
	p1 = (struct student * )malloc(LEN);
	scanf("%d", &p1 -> num);
	
	while(p1 -> num != 0)//建立链表，p1开辟新节点，p2.next装p1 
	{
		p2 -> next = p1;
		p2 = p1;
		p1 = (struct student * )malloc(LEN);
		scanf("%d", &p1 -> num);
	}
	
	p2 -> next = NULL;
	
	return head;
}

int main(void)
{
	struct student *p, *head;
	
	head = create();
	
	for(p = head; p != NULL; p = p -> next)
	{
		printf("%d\n", p -> num);
	}
	
	return 0;
}
