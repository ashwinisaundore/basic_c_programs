#include<stdio.h>
int main()
{
float u,a,t,s,v;
printf("enter initial velocity");
scanf("%f",&u);
printf("enter acceleration");
scanf("%f",&a);
printf("enter time");
scanf("%f",&t);
v=u+u+a*t;
s=u+a*t*t;
printf("final velocity=%f",v);
printf("distance=%f",s);
}
