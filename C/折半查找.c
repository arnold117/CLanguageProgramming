#include<stdio.h>

#define N 8

int *fun(int *p, int n, int t);

int main(void)
{
    int a[8] = { 2, 4, 6, 8, 10, 12, 14, 16}, t, i;

    printf("Please enter value of t:");
    scanf("%d", &t);

    if (fun(a, 8, t) == NULL)
    {
        printf("Not Found!\n");
    }
    else 
    {
        printf("a[%d] = %d\n", fun(a, 8, t) - a, t);
    }

    return 0;
}
    
int *fun(int *p, int n, int t)
{
    int i, j, k;

    i = 0;
    j = n - 1;
    
    if (t < p[0] || t > p[n - 1])
    {
        return NULL;
    }
    else
    {
        if (t == p[n -1])
        {
            return p + n -1;
        }
        else
        {
            k = (i + j) / 2;

            while (k < n-2)
            {
                if (t == p[k])
                {
                    return p + k;
                }
                else
                {
                    if (t < p[k])
                    {
                        j = k;
                    }
                    else
                    {
                        i = k;
                    }
                    
                    k = (i + j) / 2;
                }
                
            }
            
            if (t == p[n - 2])
            {
                return p + n - 2;
            }
            else
            {
                return NULL;
            }
        }
    }
}