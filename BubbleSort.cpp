#include <iostream>

using namespace std;

int main()
{
    int n,a[100],temp,j,i;
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter "<< n <<" elements";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    }
    cout<<"The numbers in sorted order are: ";

    for (i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
