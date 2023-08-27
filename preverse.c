#include<stdio.h>
int main()
{
int n,d,r=0,*pn;
printf("enter no");
scanf("%d",&n);
pn=&n;
while(*pn>0)
{
d=*pn%10;
*pn=n/10;
r=r*10+d;
}
printf("reverse no=%d",r);
}

