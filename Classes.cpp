#include<iostream>
using namespace std;
class addition
{
int a,b,c;
public:
void add()
{
cout<<"Enter a and b";
cin>>a>>b;
c=a+b;
cout<<"Addition is "<<c<<endl;
}
void sub()
{
cout<<"Enter a and b";
cin>>a>>b;
c=a-b;
cout<<"Substraction is "<<c<<endl;
}
void mult()
{
cout<<"Enter a and b";
cin>>a>>b;
c=a*b;
cout<<"Product is"<<c<<endl;
}
void div()
{
cout<<"Enter a and b";
cin>>a>>b;
c=a/b;
cout<<"Quotient is"<<c<<endl;
}
};
int main()
{
addition object;
int n;
cout<<"Enter 1 for addition"<<endl;
cout<<"Enter 2 for substraction"<<endl;
cout<<"Enter 3 for multiplication"<<endl;
cout<<"Enter 4 for division"<<endl;
cin>>n;

switch(n)
{
case 1: object.add();
break;
case 2: object.sub();
break;
case 3: object.mult();
break;
case 4: object.div();
break;

default:
cout<<"Enter a valid choice";
break;
}
}



