#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f;
cout<<"enter your marks in physics";
cin>>a;
cout<<"enter your marks in chemistry";
cin>>b;
cout<<"enter your marks in biology";
cin>>c;
cout<<"enter your marks in mathematics";
cin>>d;
cout<<"enter your marks in computer science";
cin>>e;
f=(a+b+c+d+e)/5;
cout<<"percentage = "<<f;
if(f>=90)
cout<<"A grade";
else if(f>=80)
cout<<"B grade";
else if(f>=70)
cout<<"C grade";
else if(f>=60)
cout<<"D grade";
else if (f>=40)
cout<<"E grade";
else
cout<<"F grade";
}




