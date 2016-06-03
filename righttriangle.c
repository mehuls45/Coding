#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the sides of the triangle");
scanf("%d%d%d", &a,&b,&c);
if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(a*a)+(c*c)==(b*b))
{
printf("The triangle is a right angled triangle");
}
}


