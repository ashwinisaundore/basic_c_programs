#include<stdio.h>
int main()
{
int n,s=0;
printf("enter number");
scanf("%d",&n);
while(n>0)
{
s++;
n=n/10;
}
printf("count digit=%d",s);
}
