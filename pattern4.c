#include<stdio.h>
int main()
{
int row,col;
for(row=1;row<=4;row++)
{
for(col=4;col>row;col--)
{
printf(" ");
}
for(col=1;col<=row;col++)
{
printf("*");
}
printf("\n");
}
}
