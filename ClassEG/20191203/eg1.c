#include<stdio.h>
#include<conio.h>

#define M 3
#define N 4
#define K 2

struct stu
{
    int num;
    char str1[30];
    char str2[30];
    struct stu *next;
};

int main(void)
{
    struct stu x = {3, "LI", "123"}, *p;

    p = &x;
    scanf("%d%s%s", &p->num, &p->str1, &p->str2);
    printf("%d, %s, %s\n", p->num, p->str1, p->str2);

    return 0;
}
