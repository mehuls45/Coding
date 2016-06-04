#include <iostream>

using namespace std;

class orange
{
    int num,temp,i,sum=0;

public:

    void perfect()
    {
        cout<<"Enter a number: "<<endl;
        cin>>num;

        temp=num;

        for(i=1;i<num;i++)
        {
            if(temp%i==0)
            {
                sum=sum+i;
            }
        }

        if(sum==num)
        {
            cout<<"Perfect Number!";

        }
        else
        {
            cout<<"Not a perfect number!";
        }
          sum=0;


    }
};

int main()
{
    orange horse;
    horse.perfect();
}
