#include<stdio.h>
int main()
{
    int a, b, c, d,time,Time,tim;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);
    time = a*60+b;
    Time = c*60+d;
    tim = Time-time;
    a = tim/60;
    b = tim%60;
    printf("%d h, %d min",a,b);
    return 0 ;
}
