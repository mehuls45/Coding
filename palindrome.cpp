//Code to check if the inputed number is a palindrome. Using C++

#include <iostream>

using namespace std;

int main()
{
    int n,reverse=0,temp;

    cout<<"Enter a number";
    cin>>n;

    temp=n;

    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;

    }
    if(n==reverse)
    {
        cout<<"Palindrome";
    }
    else
        cout<<"Not a palindrome!";
}
