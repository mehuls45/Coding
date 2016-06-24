//Assignment no 1 for DSA.

#include <iostream>
using namespace std;

class student{
    float total=0,m=0;
    int a[1000],n,j,b,f,maxim=0,g,minim=200;
    string sub;

public:

    void input(){
        cout<<"Enter name of the subject: "<<endl;
        cin>>sub;
        cout<<"Enter total number of students: "<<endl;
        cin>>n;
    }
    void get(){
        cout<<"Enter the marks of "<<n<<" students:"<<endl;
        for(j=0;j<n;j++){
        cin>>a[j];
        }
        for(b=0;b<n;b++){
            if(a[b]>=0){
      //If the student is absent for the test, the marks will be inputed as -1.
      //-1 will not be added to the total sum and the student scoring -1 will be termed as absent.
                total += a[b];
                m++;
            }
        }
    }
    void top(){
        for(f=0;f<n;f++){
            if(a[f]>=0 && a[f]>maxim){
                maxim=a[f];
            }
        }
    }
    void low(){
        for(g=0;g<n;g++){
            if(a[g]>=0 && minim>a[g]){
                minim=a[g];
            }
        }
    }
    void display(){
        cout<<"Subject name: "<<sub<<endl;
         cout<<"Total number of students: "<<n<<endl;
          cout<<"Total number of students appeared:  "<<m<<endl;
           cout<<"Absent students: "<<n-m<<endl;
            cout<<"Highest score: "<<maxim<<endl;
             cout<<"Lowest marks: "<<minim<<endl;
              cout<<"Average score: "<<total/m<<endl;
    }
};
int main()
{
   student s;
   s.input();
   s.get();
   s.top();
   s.low();
   s.display();
}
