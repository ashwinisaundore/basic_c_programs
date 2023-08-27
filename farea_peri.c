#include<stdio.h>
float r;
int main()
{
void circle(float r);
printf("accept radius");
scanf("%f",&r);
circle(r);
}
void circle(float r)
{
float a=3.14*r*r;
float p=2*3.14*r;
printf("area=%f",a);
printf("perimeter=%f",p);
}

