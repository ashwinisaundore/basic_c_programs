#include<stdio.h>
int main()
{
int n,i,s=0;
printf("enter no");
scanf("%d",&n);
for(i=1;i<n;i++)
{
(n%i==0);
s=s+i;
}
if(s==n)
printf("number is perfect");
else
printf("number is not perfect");
}

