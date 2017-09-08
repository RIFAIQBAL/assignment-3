#include<iostream>
using namespace std;
int main()
{
int dig,sum=1,n;
cout<<"enter any number";
cin>>n;
while(n>0){
dig=n%10;
sum=sum*dig;
n=n/10;
}
cout<<"the product of the digit is" <<sum;
}
