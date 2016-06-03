//Check the type of triangle using C

#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of a,b and c");
scanf("%d%d%d", &a,&b,&c);
if (a==b)&&(b==c)&&(c==a)
{
printf("The triangle is an equilateral triangle");
}
else if ((a==b)&&(b!=c))||((a==c)&&(b!=c))||((b==c)&&(a!=b))
{
printf("The triangle is isosceles triangle");
}
else if (a!=b)&&(b!=c)&&(c!=a)

{
printf("The triangle is a scalene triangle");
}
}

