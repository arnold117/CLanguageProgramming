//方法二：将交换函数封装，通过判断条件选择是否进行调用
 #include<stdio.h>
 void exchange(int *x,int *y)
 {
 	int tmp = *x;
 	*x = *y;
 	*y = tmp;
 }
 int main()
 {
 	int a,b,c;
 	printf("Please enter values:	");
 	scanf("%d %d %d",&a,&b,&c);
 	if(a<b)
 	exchange(&a,&b);
 	if(a<c)
 	exchange(&a,&c);
 	if(b<c)
 	exchange(&b,&c);
 	printf("The order is: %d,%d,%d\n",a,b,c);
 	return 0;
 }
