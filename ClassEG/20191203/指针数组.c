#include<stdio.h>
#include <string.h>

#define N 4

void fun(char *p[N]);
int cmpstr(char *p1, char *p2);

int main(void)
{
    char *str[N] = { "abc", "def", "how", "que" };
    int i;
    fun(str);

    for ( i = 0; i < N; i++)
    {
        puts(str[i]);
    }
    
    return 0;
}

void fun(char *p[N])
{
    int i, j;
    char *t;

    for ( i = 0; i < N - 1; i++)
    {
        for ( j = 0; j < N - i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0/*cmpstr(p[j], p[j + 1]) == 1*/)
            {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
            
        }
        
    }
    
}

int cmpstr(char *p1, char *p2)
{
    do
    {
        if (*p1 < *p2)
        {
            return -1;
        }
        else
        {
            if (*p1 > *p2)
            {
                return 1;
            }
            else
            {
                if (*p1 == '\0' && *p2 == '\0') 
                {
                    return 0;
                }
            }
        }
        
        
    } while (1);
    
}
