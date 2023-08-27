#include<stdio.h>
int main()
{
int a,b,*x,*y;
printf("enter two nos");
scanf("%d%d",&a,&b);
y=&a;
x=&b;
if(*x>*y)
printf("maximum no=%d",*x);
else
printf("\n maximum no=%d",*y);
}
