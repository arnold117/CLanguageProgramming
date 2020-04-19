#include<stdio.h>
#include<conio.h>

int main(void)
{
    int a, b;
    char c;

    a = 0;
    b = 0;
    c = getchar();

    switch (c)
    {
    case 'a':
        a++;
        b++;
    case 'b':
        a++;
        b++;
    case 'c':
        a++;
        b++;
    default:
        a = a +2;
    }

    getch();
    printf("a = %d, b = %d\n", a, b);
}
