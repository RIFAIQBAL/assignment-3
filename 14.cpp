#include<iostream>
using namespace std;
int main()
{
cout<<"enter three angles of a triangle"<<endl;
int a=1;
float b;
float c=0;
while(a<=3){
cin>>b;
c=c+b;
a++; 
}
cout<<"the sum of angles is"<<c<<endl;
if(c==180)
cout<<"the triangle is valid";
else
cout<<"the triangle is not valid";
}
