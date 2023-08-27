#include<stdio.h>
int main()
{
int row,col;
for(row=4;row>=1;row--)
{
for(col=1;col<=row;col++)
{
printf("*");
}
printf("\n");
}
for(row=2;row<=4;row++);
{
for(col=1;col<=row;col++)
{
printf("*");
}
printf("\n");
}
for(row=2;row<=4;row++)
{
for(col=1;col<=row;col++)
{
printf("*");
}
printf("\n");
}
}

