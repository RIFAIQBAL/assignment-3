#include<iostream>
using namespace std;
int main()
{
int dig,sum=0,n;
cout<<"enter any number";
cin>>n;
while(n>0){
dig=n%10;
sum=sum+dig;
n=n/10;
}
cout<<"the sum of the digit is" <<sum;
}
