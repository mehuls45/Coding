//Searches for a number at "n"th location.

#include<iostream>
using namespace std;
int main()
{
int a[100],i,n,d=0;
cout<<"Enter the 10 numbers";
for (i=0;i<10;i++)
{
cin>>a[i];
}
cout<<"Enter the number to be searched";
cin>>n;
for(i=0;i<10;i++)
{
if (a[i]==n)
{
cout<<"Number is at "<<i+1<<"position";
d++;
break;
}
}
if (d==0)
{
cout<<"Number not found";
}
}


