//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. 
For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
//Code to fin if the number is armstrong using C++


#include <iostream>

using namespace std;

class mangoes
{
    int num,temp,rem,sum=0;

public:
    void arm()
    {
        cout<<"Enter a number";
        cin>>num;

        temp=num;

        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }

        if (sum==num)
        {
            cout<<"The number is armstrong number";
        }
        else
            cout<<"The number is not an armstrong number";
    }
};

int main()
{
    mangoes object;
    object.arm();
}
