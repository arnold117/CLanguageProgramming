#include<stdio.h>
int main()
{
        int x,y;
        printf("Please enter value x:");
        scanf("%d",&x);    
        if (x > 20)
        {
                y = x;
        }

        else
        {
                if(x<10)
                {
                        y = 2*x-1;
                }
        		else
                {
                        y = 3*x-11;
                }
        }
        printf("%d",y);

        return 0;
}
