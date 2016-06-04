//Perfect number, a positive integer that is equal to the sum of its proper divisors. 
The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.
//Code to find if the inputed number is perfect. Using C++.

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
