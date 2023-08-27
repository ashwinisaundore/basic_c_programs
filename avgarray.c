#include<stdio.h>
int main()
{
int a[100],n,i,sum=0;
float avg;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter no");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
avg=(float) sum/n;
}
printf("sum=%d",sum);
printf("avg=%f",avg);
}
