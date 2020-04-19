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
struct student *ins(struct student *head, struct student *p);
struct student *del(struct student *head, int n);

struct student *create()
{
	struct student *head, *p1, *p2;
	
	p1 = p2 = head = (struct student*)malloc(LEN);
	printf("Please enter a value:\n");
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

struct student *ins(struct student *head, struct student *p)
{
	struct student *p1, *p2;
	
	if(p->num < head->num)
	{
		p->next = head;
		head = p;

        return head;
	}
	else
	{
		p1 = p2 = head;
		p1 = p1->next;
		
		while(p1 != NULL)
		{
			if(p->num > p2->num && p->num < p1->num)
			{
				p2->next = p;
				p->next = p1;

                return head;
			}
			
			p2 = p1;
			p1 = p1->next;
		}
		
		if(p->num > p2->num)
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

struct student *del(struct student *head, int n)
{
    struct student *p1, *p2;

    p1 = p2 = head;
    
    if (n == head->num)
    {
        head = head->next;
        free(p1);

        return head;
    }
    else
    {
        p1 = p1->next;

        while (p1 != NULL)
        {
            if (n == p1->num)
            {
                p2->next = p1->next;
                free(p1);

                return head;
            }
            
            p2 = p1;
            p1 = p1->next;
        }
        
        printf("Match not found!\n");

        return head;
    }
    
    
}

int main(void)
{
	struct student *p, *head, *p1;
    int n;
	
	head = create();
	p1 = (struct student*)malloc(LEN);
    printf("Please enter insert value:\n");
	scanf("%d", &p1->num); 
	head = ins(head, p1); 
	
	for(p = head; p != NULL; p = p->next)
	{
		printf("%d\n", p->num);
	}

    printf("Please enter delete value:\n");
    scanf("%d", n);
    head = del(head, n);

    for(p = head; p != NULL; p = p->next)
	{
		printf("%d\n", p->num);
	}
	
	return 0;
}
