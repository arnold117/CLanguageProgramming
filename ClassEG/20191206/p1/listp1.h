#ifndef _LISTP1_H

#define _LISTP1_H

//需要的头文件
#include<stdio.h>
#include<stdlib.h>

//创建 student 结构体，并定义别名 Stu .
typedef struct student
{
	int num;
	char name[30];
	struct student* next;
} Stu;

//函数声明
Stu* creat();
Stu* ins(Stu* head, Stu* p);
Stu* del(Stu* head, int n);

#endif // !_LISTP1_H
