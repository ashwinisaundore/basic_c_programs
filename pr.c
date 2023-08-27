#include<stdio.h>
int main()
{
int bsearch(int a[100],int n,int num);
int a[100],i,n,num,mid,top,bottom,p;
printf("enter limit");
scanf("%d",&n);
printf("enter n number in sorted order");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter no to search");
scanf("%d",&num);
p=bsearch(a,n,num);
if(p==-1)
printf("not found");
else
printf("found position=%d",p);
}
int bsearch(int a[100],int n,int num)
{
int i,flag=0,top,mid,bottom;
top=0;
bottom=n-1;
while(top<=bottom)
{
mid=(top+bottom)/2;
if(a[mid]==num)
{
return mid;
}
if(num>a[mid])
top=mid+1;
else
bottom=mid-1;
}
return -1;
}

