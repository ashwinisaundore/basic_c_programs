#include<stdio.h>
int main()
{
int m,d,n=0;
printf("enter number");
scanf("%d",&n);
while(n>0)
{
d=n%10;
n=n/10;
m=m*d;
}
printf("multiplication of digit=%d",m);
}
