#ifndef _LISTP1_H

#define _LISTP1_H

//��Ҫ��ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>

//���� student �ṹ�壬��������� Stu .
typedef struct student
{
	int num;
	char name[30];
	struct student* next;
} Stu;

//��������
Stu* creat();
Stu* ins(Stu* head, Stu* p);
Stu* del(Stu* head, int n);

#endif // !_LISTP1_H
