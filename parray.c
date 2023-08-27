#include<stdio.h>
int main()
{
int *a[100],n,i;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter no");
scanf("%d",a+i);
}
printf("array nos");
for(i=n-1;i<n;i++)
{
printf("%d",*(a+i));
}
}
