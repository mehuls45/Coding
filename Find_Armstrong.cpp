#include <iostream>

using namespace std;

class mangoes
{
    int num,temp,i,rem,grape,sum=0;

public:
    void arm()
    {
        cout<<"Enter a number:"<<endl;
        cin>>num;

        cout<<"The armstrong numbers upto "<<num<< " are:"<<endl;

   for(i=1;i<=num;i++)
   {
       temp=i;
       grape=temp;

        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }

        if(sum==grape)
        {
            cout<<sum<<endl;
        }
        sum=0;

   }
    }
};

int main()
{
    mangoes object;
    object.arm();
}
