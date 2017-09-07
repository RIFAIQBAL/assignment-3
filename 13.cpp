#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g;
cout<<"enter your amount";
cin>>a;
b=a/2000;
a=a%2000;
c=a/500;
a=a%500;
d=a/100;
a=a%100;
e=a/50;
a=a%50;
f=a/10;
a=a%10;
g=a/5;
a=a%5;
cout<<"you have "<<b<<" 2000rupee notes and "<<c<<" 500rupee notes "<<d<< "and 100rupee notes "<<e<<" and 50rupee notes "<<f<<" and 10rupee notes "<<g<<" and 5 rupee notes "<<a<<"remains";
}
