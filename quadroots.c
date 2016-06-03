#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
float x1,x2;
printf("Enter the values of a,b & c");
scanf("%d %d %d", &a, &b, &c);

   if(a==0)
{
printf("The roots does not exist");
}
else
{
d=b*b-4*a*c;
}
  if(d==0)
{
printf("The roots are real and same");
x1=x2=(-b)/(2*a);
printf("x1 = x2 = %f",x1);
}
   else if(d>0)
{
printf("The roots are real and unique");
x1=((-b+sqrt(d))/(2*a));
x2=((-b-sqrt(d))/(2*a));
printf("Roots of the quadratic equation are %f%f",x1,x2);
}
else
{
printf("The roots are imaginary");
}
}
