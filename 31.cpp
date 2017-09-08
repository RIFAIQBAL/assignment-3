#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"enter any number";
cin>>n;
while(n>0){
n=n/10;
count++;
}
cout<<"the total number of digits are"<<count;
return 0;
}
