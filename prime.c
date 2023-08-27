#include<stdio.h>
int main()
{
int n,i,s=0;
printf("enter numbers");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
s=s+i;
}
if(s==0)
printf("number is prime");
else
printf("number is not prime");
}
