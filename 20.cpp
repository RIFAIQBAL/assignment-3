#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter your basic salary";
cin>>a;
if (a<=10000){
b=a*0.2;
c=0.8*a;
}
else if(a<=20000){
b=0.25*a;
c=0.9*a;
}
else if(a>20000){
b=0.3*a;
c=0.7*a;
}
d=a+b+c;
cout<<"the gross salary is "<<d;
}
