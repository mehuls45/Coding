//Code to find age by inputing the user's date. Using C

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int y,m,d,Y,M,D;
{
	printf("Enter the year");
	scanf("%d",&y);
	printf("Enter the month");
	scanf("%d",&m);
	printf("Enter the day");
	scanf("%d",&d);
{
	if(y>2015)
	{
	printf("Not born!");
	}
	else if((y==2015)&&(m>11))
	{
	printf("Not born!");
	}
	else if((y==2015)&&(m==11)&&(d>10))
	{
	printf("Not born!");
	}
	else
      {
	if((y<=2015)&&(m<=11)&&(d<=10))
	{
	Y=2015-y;
	M=11-m;
	D=10-d;
	}

	else if((y<2015)&&(m>11)&&(d<=10))
	{
	Y=2014-y;
	M=23-m;
	D=10-d;
	}
	else if((y<2015)&&(m<11)&&(D>10))
	{
	Y=2015-y;
	M=10-m;
	D=40-d;
	}
	else if((y<2015)&&(m>11)&&(d>10))
	{
	Y=2014-y;
	M=22-m;
	D=40-d;
	}
	printf("You are %d years old\n",Y);
	printf("You are %d months old\n",M);
	printf("You are %d days old\n",D);
}
}
}
getch();
}
