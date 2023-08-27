#include<stdio.h>
int main()
{
int n,d,r=0,n1,*x;
printf("enter no");
scanf("%d",&n);
x=&n;
n1=*x;
while(*x>0)
{
d=*x%10;
n=*x/10;
r=r*10+d;
}
if(r==n1)
printf("no is palindrome");
else
printf("no is not palindrome");
}
