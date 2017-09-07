#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three sides of a triangle :"<<endl;
cin>>a>>b>>c;
if((a==b)&&(b==c))
cout<<"the triangle is equlateral";
else if((a==b)&&(a!=c)||(a==c)&&(a!=b)||(b==c&&c!=a))
cout<<"the triangle is isosceles";
else
cout<<"the triangle is scalene";
}
