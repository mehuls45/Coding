#include<iostream>
#include<algorithm>
using namespace std;

int size = 5;

int main(){

 int a[5]={15,20,63,24,5};

 sort(a,a+size);

 cout<<"Sorted array looks like:  "<<endl;

 for(int i=0;i!=size;++i){

        cout<<a[i]<<"  ";


 }

}
