#include<stdio.h>
int main()
{
int n;
printf("enter no");
scanf("%d",&n);
printf("reverse no");
while(n>0)
{
printf("%d",n%10);
n=n/10;
}
}
