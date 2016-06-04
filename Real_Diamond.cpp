//Code to print out a real diamond. Using C++
// eg.      *
           * *
           * *
            *
             
#include <iostream>

using namespace std;

class pattern
{
    int num,temp,space,row,c;

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
        space=1;
        for(row=1;row<=num-1;row++)
        {
            for(c=1;c<=space;c++)
            {
                cout<<" ";
            }
            space++;

            for(c=1;c<2*(num-row);c++)
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
