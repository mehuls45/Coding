//Code for binary sorting in C++

#include<iostream>

using namespace std;

int main()
{
int a[100],i,mid,beg,end,item,n;
cout<<"How many numbers?";
cin>>n;
cout<<"Enter"<<n<<"numbers";
for (i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the element to be searched";
cin>>item;
beg=1;
end=n;
mid=(beg+end)/2;

while(beg<=end && a[mid]!=item)     
{
if(a[mid]<item)
beg=mid+1;
else
end=mid-1;

mid=(beg+end)/2;
}

if(a[mid]==item)
{
cout<<"Data is Found at Location"<<mid<<endl;
}
else
{
cout<<"Data is Not Found";
}
}





