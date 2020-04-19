#include<stdio.h>

int fum(char *p, int *a);

int main(void)
{
    char str[100];
    int a[20], i;

    printf("Please enter a string:\n");
    gets(str);
    
    for (i = 0; i < fun(str, a); i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}

int fun(char *p, int *a)
{
    char *p1;
    int *a1, n = 0;

    p1 = p;
    a1 = a - 1;

    while (*p1 != '\0')
    {
        if (p1 == p)
        {
            if (*p1 <= '9' && *p1 >= '0')
            { 
				a1++;
                *a1 = *p1 - '0';
                n++;
            }
        }
        else
        {
            if (*p1 <= '9' && *p1 >= '0')
            {
                if (*(p1 - 1) <= '9' && *(p1 - 1) >= '0')
                {
                    *a1 = *a1 * 10 + *p1 - '0';
                }
                else
                {
                    a1++;
                    *a1 = *p1 -'0';
                    n++;
                }
                
            }
            
        }
        

        p1++;
    }
    
    return n;
}
