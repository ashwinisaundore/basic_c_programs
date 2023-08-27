#include<stdio.h>
int main()
{
int row,col,vol=1,n;
printf("enter limit");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
for(col=1;col<=row;col++)
{
printf("%d\t",vol++);
}
printf("\n");
}
}
