#include<stdio.h>
int main()
{
int n,d,s1=0,s2=0;
printf("enter no");
scanf("%d",&n);
while(n>0)
{
d=n%10;
n=n/10;
if(d%2==0)
s1=s1+d;
else
s2=s2+d;
}
printf("even digit sum=%d",s1);
printf("\n odd digit sum=%d",s2);
}
