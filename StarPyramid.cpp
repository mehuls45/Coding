//Code to print a pyramid of stars. Using C++.

#include <iostream>

using namespace std;

class pattern
{
    int num,temp,row,c;

public:
    void star()
    {
        cout<<"Enter the number of rows"<<endl;
        cin>>num;

        temp=num;

        for (row=1;row<=num;row++)
        {
            for(c=1;c<temp;c++)
            {
                cout<<" ";
            }
            temp--;


            for(c=1;c<=2*row-1;c++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

    }
};

int main()
{
    pattern object;
    object.star();
}
