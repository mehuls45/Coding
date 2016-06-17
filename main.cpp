//Find biggest number among the numbers inputed in the array. Using C++

#include <iostream>
using namespace std;

int main(){
    int n,b=0;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    for(int i=3;i<=n;i++){
       for(int a=2;a<i;a++){
            if(i%a==0)
            b++;
       }
       if(b==0)
        cout<<i<<" is a prime number "<<endl;

       b=0;
    }
}
