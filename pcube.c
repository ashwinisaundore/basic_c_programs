#include<stdio.h>
int  main()
{
int a,*x;
printf("enter no");
scanf("%d",&a);
x=&a;
printf("cube=%d",(*x)*(*x)*(*x));
}
