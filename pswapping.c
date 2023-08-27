#include<stdio.h>
int main()
{
int t, a,b,*x,*y;
printf("enter two nos");
scanf("%d%d",&a,&b);
x=&a;
y=&b;
t=*x;
*x=*y;
t=*y;
printf("swappimg a=%d",*x);
printf("swapping b=%d",*y);
}

