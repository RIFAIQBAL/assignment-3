#include<iostream>
using namespace std;
int main()
{
int dig,n;
cout<<"enter any number";
cin>>n;
cout<<"the reverse is: ";
while(n>0){
dig=n%10;
cout<<dig; 
n=n/10;
}
}
