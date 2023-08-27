#include<stdio.h>
int main()
{
int a,b,*x,*y;
printf("enter two nos");
scanf("%d%d",&a,&b);
x=&a;
y=&b;
printf("addition=%d",*x+*y);
printf("substraction=%d",*x-*y);
printf("multiplication=%d",*x**y);
printf("division=%d",*x/(*y));
}

