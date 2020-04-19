#include<stdio.h>

int main(void)
{
    int a, b, c;
    char d[2];
    char *p;

    printf("Please enter\n for example: a + b:>\n");
    scanf("%d %s %d", &a, &d, &b);
    p = d;

    switch (*p)
    {
        case '+':
        {
            c = a + b;
            break;
        }
        case '-':
        {
            c = a - b;
            break;
        }
        case '*':
        {
            c = a * b;
            break;
        }
        case '/':
        {
            c = a / b;
            break;
        }
        default:
        {
            break;
        }
    }

    printf("%d %s %d = %d!", a, d, b, c);

    return 0;
}